#if !( defined tHDef_Lib_GZ_WinOpenGL_SOpGpu || defined  tHDef_IN_Lib_GZ_OpenGL_OpGpu || defined  tHDef_IN_Lib_GZ_Gpu_Gpu || defined  tHDef_IN_Lib_GZ_Class)
#pragma once
#define tHDef_Lib_GZ_WinOpenGL_SOpGpu
namespace Lib_GZ_WinOpenGL{class cSOpGpu;}

#include "Lib_GZ_WinOpenGL/Lib_GZ_WinOpenGL.h"
#include "Lib_GZ/GZ.h"
#include "Lib_GZ/Thread.h"
#include "Lib_GZ_OpenGL/OpGpu.h"
// ------  Cpp section  ------ //
#include "Lib_GZ/SysUtils/WindowsHeader.h"
// --------------------------- //

namespace Lib_GZ_WinOpenGL{namespace SOpGpu{

//Structure Definition

}}

//Optimised Class include -> direct class or header of header (Constants)
#include "Lib_GZ_OpenGL/_OpenGL.h"
namespace Lib_GZ{namespace Gpu{class cGpu;}}
namespace Lib_GZ{namespace Gpu{class cGpuInfo;}}
namespace Lib_GZ{namespace Gpu{namespace ShaderModel{namespace GzModel{class cGzShModel;}}}}
namespace Lib_GZ_OpenGL{class cOpGpu;}
namespace Lib_GZ_WinOpenGL{class cSOpGpu;}
namespace Lib_GZ{namespace Sys{class cDebug;}}
namespace Lib_GZ{class cClass;}
namespace Lib_GZ{class cThreadMsg;}

namespace Lib_GZ_WinOpenGL{namespace SOpGpu{


	//Structure Implementation

	//Unit creation
	//Unit destruction
	//Unit array write

}
class tApi_Lib_GZ_WinOpenGL pSOpGpu {

	public:
	//Pure Function

};

class tApi_Lib_GZ_WinOpenGL cSOpGpu : public Lib_GZ_OpenGL::cOpGpu {

	public:

		// ------  Cpp section  ------ //
		HDC hDC;
		HGLRC hRC;
		// --------------------------- //


		//Var
		virtual void fLoadImg(gzInt* _aImg, gzInt _nWidth, gzInt _nHeight);
		virtual gzBool fContextIni(gzUIntX _nHandleId, gzBool _bGlobalSharedContext);
		virtual void fBlit();
		virtual gzBool fLoadDefaultShader();
		virtual void fClear();
		cSOpGpu(Lib_GZ::cBase* _parent);
		virtual void Ini_cSOpGpu(gzUIntX _nHandleId, gzBool _bGlobalSharedContext);

		inline cSOpGpu(const cSOpGpu &_o)  : Lib_GZ_OpenGL::cOpGpu(_o){};
		inline cSOpGpu(const cSOpGpu &_o, gzBool _b)  : Lib_GZ_OpenGL::cOpGpu(_o, _b){};
		virtual gzAny MemCopy();
		virtual gzAny DeepCopy();
		virtual ~cSOpGpu();

	private:

		//Var

};
class tApi_Lib_GZ_WinOpenGL csSOpGpu : public Lib_GZ_OpenGL::csOpGpu  {

	public:
		//Object Creation Wrapper
		inline virtual gzSp<Lib_GZ::Gpu::cGpu> New(Lib_GZ::cBase* _parent, gzUIntX _nHandleId, gzBool _bGlobalSharedContext){
			gzSp<cSOpGpu>_oTemp = gzSp<cSOpGpu>(new cSOpGpu(_parent));
			_oTemp->Ini_cSOpGpu(_nHandleId, _bGlobalSharedContext);
			return _oTemp;
		}
		//Public static

		//Static function

		inline csSOpGpu(Lib_GZ::cBase* _parent): Lib_GZ_OpenGL::csOpGpu(_parent){};
		inline ~csSOpGpu(){};
};
GZ_mStaticClassOp(SOpGpu, Lib_GZ_OpenGL::OpGpu);
namespace SOpGpu{
}}
#endif