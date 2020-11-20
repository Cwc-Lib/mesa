#include "Lib_GZ_Windows/Sys/OpContextHandle.h"

#include "Lib_GZ/Sys/System.h"
#include "Lib_GZ/Sys/Message/ContextLink.h"
#include "Lib_GZ_Windows/Sys/OpContext.h"
#include "Lib_GZ/Sys/ContextHandle.h"
#include "Lib_GZ/Sys/Debug.h"
#include "Lib_GZ/Class.h"
#include "Lib_GZ/ThreadMsg.h"
#include "Lib_GZ/Gpu/Gpu.h"

//Sub Class include
#include "Lib_GZ/Base/Pt.h"


// ------  Cpp section  ------ //
HDC hmemdc;
gzInt* aPixels;
gzInt** p2DArray;
HDC dcScreen;
SIZE frameSize;
HWND hWnd;
HBITMAP hbmp;
// --------------------------- //

namespace Lib_GZ_Windows{namespace Sys{namespace OpContextHandle{
////// Current Lib Access  ////
//// Current Static Access ////
#undef _
#define _ OpContextHandle
void Ini_Class(){
}
#ifdef GZ_tHaveCallStack
gzFuncStack zFuncName[] = {{0,"OpContextHandle"},{0,"fCreateContextHandle"},{0,"fIniPixelDrawZone"},{0,"fBlit"}};
#endif
///////////////////////////////

// ------  Cpp section  ------ //
void fClientResize(HWND _hWnd, int _nWidth, int _nHeight){
RECT rcClient, rcWindow;
POINT ptDiff;
GetClientRect(_hWnd, &rcClient);
GetWindowRect(_hWnd, &rcWindow);
ptDiff.x = (rcWindow.right - rcWindow.left) - rcClient.right;
ptDiff.y = (rcWindow.bottom - rcWindow.top) - rcClient.bottom;
MoveWindow(_hWnd,rcWindow.left, rcWindow.top, _nWidth + ptDiff.x, _nHeight + ptDiff.y, TRUE);
}
// --------------------------- //

}

GZ_mCppClass(OpContextHandle)

cOpContextHandle::cOpContextHandle(Lib_GZ::cBase* _parent) : Lib_GZ::Sys::cContextHandle(_parent){
	nMainInst=0;

}

void cOpContextHandle::Ini_cOpContextHandle(Lib_GZ::Sys::Message::cContextLink* _oLink){ gz_(0)
	Ini_cContextHandle((Lib_GZ::Sys::Message::cContextLink*)(_oLink));
}

gzBool cOpContextHandle::fCreateContextHandle(){ gz_(1)
	nMainInst = Lib_GZ::Sys::System::Get(thread)->nInstance;
	gzUInt _nX = gzUInt(oLink->oPos->nX);
	gzUInt _nY = gzUInt(oLink->oPos->nY);
	//Tag cpp
	using namespace OpContextHandle;
	using namespace Lib_GZ_Windows::Sys;
	using namespace Lib_GZ::Sys::Window;
	// HWND hWnd;//Temp
	HINSTANCE hInstance = (HINSTANCE)nMainInst;
	WNDCLASSEX wClass;
	wClass.cbClsExtra=GZ_Null;
	wClass.cbSize=sizeof(WNDCLASSEX);
	wClass.cbWndExtra=GZ_Null;
	wClass.hbrBackground=GZ_Null;
	wClass.hCursor = LoadCursor( GZ_Null, IDC_ARROW );
	gzUTF16 _sIcon(oLink->sIcon);
	wClass.hIcon = LoadIcon(hInstance, (LPCWSTR)(gzUInt16*)_sIcon);
	wClass.hIconSm = LoadIcon(hInstance, (LPCWSTR)(gzUInt16*)_sIcon);
	WCHAR _buffer[10];
	static gzUInt _nUniqueId = 0;
	wsprintf(_buffer, L"GZ_%d", _nUniqueId);
	_nUniqueId ++;
	WCHAR* WinClassName =  _buffer;
	wClass.lpszClassName =  WinClassName;
	wClass.hInstance = hInstance;
	wClass.lpfnWndProc = OpContext::AppWndProc;
	wClass.lpszMenuName = GZ_Null;
	if(!oLink->bCloseBox){
	wClass.style = CS_NOCLOSE;
	}else{
	wClass.style = 0;
	}
	if ( !RegisterClassEx(&wClass) ) {
	MessageBox( GZ_Null, L"Failed to register window class.", L"Error", MB_OK );
	//::GZ::Global::nAppReturn = 0;
	return false;
	}
	/////////////////////////
	oLink->bTransparent = false;
	oLink->bBorder = true;
	gzUInt _nExStyleFlag = 0;
	gzUInt _hBorderFlag = 0;
	if(oLink->bTransparent){
	_nExStyleFlag = WS_EX_LAYERED ;
	_hBorderFlag = WS_POPUP;
	oLink->bBorder = false;
	}else{
	switch(oLink->hBorder){
	case eWinBorder::Normal :
	_nExStyleFlag = WS_EX_APPWINDOW;
	_hBorderFlag = WS_SYSMENU | WS_CAPTION;
	break;
	case eWinBorder::NormalDouble :
	_nExStyleFlag = WS_EX_APPWINDOW |WS_EX_CLIENTEDGE;
	_hBorderFlag = WS_SYSMENU | WS_CAPTION;
	break;
	case eWinBorder::None :
	_nExStyleFlag = WS_EX_APPWINDOW;
	_hBorderFlag = WS_POPUP;
	oLink->bBorder = false;
	break;
	case eWinBorder::BorderOnly :
	_nExStyleFlag = WS_EX_APPWINDOW;
	_hBorderFlag = WS_POPUP | WS_SIZEBOX;
	break;
	case eWinBorder::BorderOnlyDouble :
	_nExStyleFlag = WS_EX_APPWINDOW |WS_EX_CLIENTEDGE;
	_hBorderFlag = WS_POPUP | WS_SIZEBOX;
	break;
	case eWinBorder::Title :
	_nExStyleFlag = WS_EX_APPWINDOW;
	_hBorderFlag = WS_POPUP | WS_CAPTION;
	break;
	case eWinBorder::TitleDouble :
	_nExStyleFlag = WS_EX_APPWINDOW |WS_EX_CLIENTEDGE;
	_hBorderFlag = WS_POPUP | WS_CAPTION;
	break;
	}
	_nExStyleFlag = WS_EX_APPWINDOW;//Temp
	_hBorderFlag = WS_SYSMENU | WS_CAPTION;//Temp
	}
	gzUTF16 _sWinName(oLink->sName);
	WCHAR* _WinName = (WCHAR*)(gzUInt16*)_sWinName;
	hWnd = CreateWindowEx(
	_nExStyleFlag | WS_EX_NOPARENTNOTIFY,
	WinClassName,
	_WinName,
	_hBorderFlag
	| WS_CLIPCHILDREN | WS_CLIPSIBLINGS    // Required for OpenGL
	,_nX, _nY, nFrameWidth, nFrameHeight,
	GZ_Null, GZ_Null, hInstance, this);
	if (!hWnd){
	gzInt nResult = GetLastError();
	WCHAR buffer[100];
	wsprintf(buffer, L"Window Class Failed, error : %i", nResult);
	MessageBox(GZ_Null, buffer, L"Window Creation Failed!", MB_ICONERROR);
	}
	dcScreen = GetDC(hWnd);
	nHandleId = (gzUIntX)dcScreen;
	nWinHandleId = (gzUIntX)hWnd;
	fClientResize(hWnd, nFrameWidth, nFrameHeight); //Set correct client size
	ShowWindow( hWnd, SW_SHOWDEFAULT );
	Lib_GZ::Sys::Debug::Get(thread)->fTrace1(gzStrL("Finsish Create: ") + gzStrI(nHandleId));
	return false;
}

gzInt32* cOpContextHandle::fIniPixelDrawZone(){ gz_(2)
	Lib_GZ::Sys::Debug::Get(thread)->fTrace1(gzStrL("fIniPixelDrawZone"));
	//Tag cpp
	frameSize.cx = nFrameWidth;
	frameSize.cy = nFrameHeight;
	if (oLink->bGpuDraw == false){
		//Tag cpp
		hmemdc = CreateCompatibleDC(dcScreen);
		BITMAPINFO bmi;
		bmi.bmiHeader.biSize = sizeof(BITMAPINFO);
		bmi.bmiHeader.biWidth = nFrameWidth;
		bmi.bmiHeader.biHeight =  -nFrameHeight; // Negative -> order pixels from top to bottom
		bmi.bmiHeader.biPlanes = 1;
		bmi.bmiHeader.biBitCount = 32;
		bmi.bmiHeader.biCompression = BI_RGB;
		bmi.bmiHeader.biSizeImage = 0;
		bmi.bmiHeader.biXPelsPerMeter = 0;
		bmi.bmiHeader.biYPelsPerMeter = 0;
		bmi.bmiHeader.biClrUsed = 0;
		bmi.bmiHeader.biClrImportant = 0;
		bmi.bmiColors[0].rgbBlue = 0;
		bmi.bmiColors[0].rgbGreen = 0;
		bmi.bmiColors[0].rgbRed = 0;
		bmi.bmiColors[0].rgbReserved = 0;
		hbmp = CreateDIBSection( hmemdc, &bmi, DIB_RGB_COLORS, (void**)&aPixels, GZ_Null, 0 );
		SelectObject( hmemdc, hbmp );
		/*
		p2DArray = new gzInt*[nFrameHeight];
		for (gzInt y = 0; y < nFrameHeight; ++y){
		p2DArray[y] =  (gzInt*)&aPixels[y * nFrameWidth];
		}*/
		//p2DArray[1][1] = 0xFFFFFFFF;
		//			printf("\nOKI %p, ", p2DArray);
		//	aHandleDrawZone = p2DArray;
		//		printf("\nIniPix,  %p,", aHandleDrawZone);
		//return p2DArray;
		return aPixels;
	}
	return zNull;
}

gzUIntX cOpContextHandle::fBlit(){ gz_(3)
	//Tag cpp
	if (hWnd && dcScreen) {
	if(oLink->bGpuDraw){
	/*
	static gzBool _bOneTime  = false;
	if(!bOnRezize){
	_bOneTime = false;
	oGpu->fWinBlit(dcScreen,0);
	}else{
	if(!_bOneTime){
	_bOneTime = true;
	bResizeRenderReady = true;
	}
	}*/
	}else{
	//printf("\nsss");
	//if(!oLink->bTransparent){
	BitBlt( dcScreen, 0, 0, nFrameWidth, nFrameHeight, hmemdc, 0, 0, SRCCOPY );
	/*
	if(nResFacX == 1 && nResFacY == 1){
	BitBlt( dcScreen, 0, 0, nFrameWidth, nFrameHeight, hmemdc, 0, 0, SRCCOPY );
	}else{
	StretchBlt( dcScreen, 0, 0, nFrameWidth, nFrameHeight, hmemdc, 0, 0, nFrameWidth/nResFacX, nFrameHeight/nResFacY, SRCCOPY );
	}*/
	/*
	}else{
	static BLENDFUNCTION bf = {AC_SRC_OVER, 0, nWinAlpha, AC_SRC_ALPHA};
	static POINT ptSrc = {0,0};
	UpdateLayeredWindow(hWnd, dcScreen, GZ_Null, &frameSize, hmemdc, &ptSrc, 0, &bf, ULW_ALPHA);
	}*/
	}
	}
	return 0;
}

gzAny cOpContextHandle::MemCopy(){
return (gzAny)new cOpContextHandle(*this);
}
gzAny cOpContextHandle::DeepCopy(){
return (gzAny)new cOpContextHandle(*this, true);
}
cOpContextHandle::~cOpContextHandle(){
}



}}