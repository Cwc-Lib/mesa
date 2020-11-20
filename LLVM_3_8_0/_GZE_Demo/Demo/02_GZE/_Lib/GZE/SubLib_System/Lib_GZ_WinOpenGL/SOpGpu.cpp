#include "Lib_GZ_WinOpenGL/SOpGpu.h"

#include "Lib_GZ_OpenGL/OpenGL.h"
#include "Lib_GZ/Gpu/Gpu.h"
#include "Lib_GZ/Gpu/GpuInfo.h"
#include "Lib_GZ/Gpu/ShaderModel/GzModel/GzShModel.h"
#include "Lib_GZ_OpenGL/OpGpu.h"
#include "Lib_GZ/Sys/Debug.h"
#include "Lib_GZ/Class.h"
#include "Lib_GZ/ThreadMsg.h"


namespace Lib_GZ_WinOpenGL{namespace SOpGpu{
////// Current Lib Access  ////
//// Current Static Access ////
#undef _
#define _ SOpGpu
void Ini_Class(){
}
#ifdef GZ_tHaveCallStack
gzFuncStack zFuncName[] = {{0,"fLoadImg"},{0,"fContextIni"},{0,"fBlit"},{0,"fLoadDefaultShader"},{0,"fClear"},{0,"SOpGpu"}};
#endif
///////////////////////////////

}

GZ_mCppClass(SOpGpu)

void cSOpGpu::fLoadImg(gzInt* _aImg, gzInt _nWidth, gzInt _nHeight){ gz_(0)
	Lib_GZ::Sys::Debug::Get(thread)->fTrace1(gzStrL("Load Img"));
}

gzBool cSOpGpu::fContextIni(gzUIntX _nHandleId, gzBool _bGlobalSharedContext){ gz_(1)
	Lib_GZ::Sys::Debug::Get(thread)->fTrace1(gzStrL("*********** OP Windows!! fContextIni GPU : ") + gzStrI(_nHandleId));
	//Tag cpp
	hDC = (HDC)_nHandleId;
	static gzUInt		PixelFormat;			    // Holds The Results After Searching For A Match
	static	PIXELFORMATDESCRIPTOR pfd =				// pfd Tells Windows How We Want Things To Be
	{
	sizeof(PIXELFORMATDESCRIPTOR),				// Size Of This Pixel Format Descriptor
	1,											// Version Number
	PFD_DRAW_TO_WINDOW |						// Format Must Support Window
	PFD_SUPPORT_OPENGL |						// Format Must Support OpenGL
	PFD_DOUBLEBUFFER,							// Must Support Double Buffering
	PFD_TYPE_RGBA,								// Request An RGBA Format
	32,									    	// Select Our Color Depth
	0, 0, 0, 0, 0, 0,							// Color Bits Ignored
	0,											// No Alpha Buffer
	0,											// Shift Bit Ignored
	0,											// No Accumulation Buffer
	0, 0, 0, 0,									// Accumulation Bits Ignored
	24,
	// 16Bit Z-Buffer (Depth Buffer)
	8,											// No Stencil Buffer
	0,											// No Auxiliary Buffer
	PFD_MAIN_PLANE,						    	// Main Drawing Layer
	0,											// Reserved
	0, 0, 0										// Layer Masks Ignored
	};
	////////////////////////////////////////////////////////////
	////////////// OPENGL 2 Compatibility context //////////////
	if (!(PixelFormat = ChoosePixelFormat(hDC,&pfd))){
	return fFatal(gzStrL("Can't find a suitable PixelFormat or valid handle"));
	}
	if(!SetPixelFormat(hDC,PixelFormat,&pfd)){
	return fFatal(gzStrL("Can't Set The PixelFormat"));
	}
	DescribePixelFormat(hDC, PixelFormat, sizeof(PIXELFORMATDESCRIPTOR), &pfd);
	if (!(hRC=wglCreateContext(hDC))){  //ReqOgl
	return fFatal(gzStrL("Can't get A Rendering Context"));
	}
	if(!wglMakeCurrent(hDC,hRC)) { //ReqOgl
	return fFatal(gzStrL("Can't Activate The GL Rendering Context"));
	}
	///////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	oGpuInfo->fIniFunctions();
	if (oGpuInfo->fGetVersion() == false){
		return fFatal(gzStrL("Mininal version required not supported >= 3.3"));
	}
	gzInt _nMin = Lib_GZ::Gpu::GpuInfo::Get(thread)->nVersionMinor;
	gzInt _nMaj = Lib_GZ::Gpu::GpuInfo::Get(thread)->nVersionMajor;
	//Tag cpp
	////////////// OPENGL 3+ core context //////////////
	PFNWGLCHOOSEPIXELFORMATARBPROC glChoosePixelFormat = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");
	PFNWGLCREATECONTEXTATTRIBSARBPROC glCreateContextAttribs = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");
	if(!(glChoosePixelFormat && glCreateContextAttribs)){
	return fFatal(gzStrL("Can't get A Rendering Context >= 3.3"));
	}
	//Delete OGL 2 Context
	wglMakeCurrent(0, 0);
	wglDeleteContext(hRC);
	////Create OPENGL 3 context ////
	const int iPixelFormatAttribList[] =
	{
	WGL_DRAW_TO_WINDOW, true,
	WGL_SUPPORT_OPENGL, true,
	WGL_DOUBLE_BUFFER, true,
	WGL_PIXEL_TYPE, WGL_TYPE_RGBA,
	WGL_COLOR_BITS, 32,
	WGL_DEPTH_BITS, 24,
	WGL_STENCIL_BITS, 8,
	0
	};
	#define WGL_CONTEXT_CORE_PROFILE_BIT 0x00000001
	int iContextAttribs[] =
	{
	WGL_CONTEXT_MAJOR_VERSION, _nMaj,
	WGL_CONTEXT_MINOR_VERSION, _nMin,
	WGL_CONTEXT_FLAGS, WGL_CONTEXT_CORE_PROFILE_BIT,
	0
	};
	int iPixelFormat, iNumFormats;
	glChoosePixelFormat(hDC, iPixelFormatAttribList, NULL, 1, &iPixelFormat, (gzUInt*)&iNumFormats);
	if(!SetPixelFormat(hDC, iPixelFormat, &pfd)){
	return fFatal(gzStrL("Can't Set The Pixel Format On Context >= 3.3"));
	}
	hRC = glCreateContextAttribs(hDC, 0, iContextAttribs);
	if(!wglMakeCurrent(hDC,hRC)) {
	return fFatal(gzStrL("Can't Activate The GL Rendering Context >= 3.3"));
	}
	fLoadDefaultShader();
	fClear();
	fBlit();
	fClear();
	return true;
}

void cSOpGpu::fBlit(){ gz_(2)
	oGzShModel->fDraw();
	//Tag cpp
	SwapBuffers(hDC); //Window func
}

gzBool cSOpGpu::fLoadDefaultShader(){ gz_(3)
	//Tag cpp
	//Default options
	#define GL_BLEND                          0x0BE2
	GL_fEnable (GL_BLEND);
	////////////////////
	oGzShModel = gzSCast<Lib_GZ::Gpu::ShaderModel::GzModel::cGzShModel>((Lib_GZ::Gpu::ShaderModel::GzModel::GzShModel::Get(thread)->New(this)));
	return false;
}

void cSOpGpu::fClear(){ gz_(4)
	//Tag cpp
	// ClearBufferMask
	#define GL_DEPTH_BUFFER_BIT               0x00000100
	#define GL_STENCIL_BUFFER_BIT             0x00000400
	#define GL_COLOR_BUFFER_BIT               0x00004000
	//		GL_fClearColor(0.0, 0.0, 1.0, 0.0);
	//		GL_fClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

cSOpGpu::cSOpGpu(Lib_GZ::cBase* _parent) : Lib_GZ_OpenGL::cOpGpu(_parent){

}

void cSOpGpu::Ini_cSOpGpu(gzUIntX _nHandleId, gzBool _bGlobalSharedContext){ gz_(5)
	Ini_cOpGpu(_nHandleId, _bGlobalSharedContext);
}

gzAny cSOpGpu::MemCopy(){
return (gzAny)new cSOpGpu(*this);
}
gzAny cSOpGpu::DeepCopy(){
return (gzAny)new cSOpGpu(*this, true);
}
cSOpGpu::~cSOpGpu(){
}



}