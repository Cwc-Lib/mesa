#include "Lib_GZ_Windows/Sys/OpContext.h"

#include "Lib_GZ/Gpu/Gpu.h"
#include "Lib_GZ/Gfx/Interface.h"
#include "Lib_GZ/Input/Key.h"
#include "Lib_GZ/Sys/Context.h"
#include "Lib_GZ/Sys/Window.h"
#include "Lib_GZ/Sys/System.h"
#include "Lib_GZ/Sys/Debug.h"
#include "Lib_GZ/Class.h"
#include "Lib_GZ/ThreadMsg.h"
#include "Lib_GZ/Sys/Message/ContextCreated.h"
#include "Lib_GZ/Sys/Message/ContextLink.h"
#include "Lib_GZ/Sys/Message/MousePos.h"
#include "Lib_GZ/Sys/Message/Blit.h"
#include "Lib_GZ/Base/Pt.h"
#include "Lib_GZ/Base/Dim.h"


// ------  Cpp section  ------ //
#include "Lib_GZ/Lib.h"
extern gzUIntX nTestProgInstance;
// --------------------------- //

namespace Lib_GZ_Windows{namespace Sys{namespace OpContext{
////// Current Lib Access  ////
//// Current Static Access ////
#undef _
#define _ OpContext
void Ini_Class(){
}
#ifdef GZ_tHaveCallStack
gzFuncStack zFuncName[] = {{0,"OpContext"},{0,"fManageMessageOp"},{0,"fMove"},{0,"fMoveAndSize"},{0,"fShow"},{0,"fHide"},{0,"fIniProcess"},{0,"fMinimize"},{0,"fMaximize"},{0,"fRestore"},{0,"fDisable"},{0,"fSendData"},{0,"fReceiveMessage"},{0,"drawPixel"},{0,"fKeyIsDown"},{0,"fCpuVSyncOnGpu"},{0,"fIsWindowReady"},{0,"fIniRender"},{0,"fGetMousePosition"},{0,"fStartCaptureOutside"},{0,"fStopCaptureOutside"},{0,"fFrameEnd"},{0,"fGetPixelArray"},{0,"fGetKey"}};
#endif
///////////////////////////////

// ------  Cpp section  ------ //
HINSTANCE hInstance;
WCHAR*  WinClassName;
#define WM_CAPTURE 0x900
#define WM_CAPTURE_RELEASE 0x901
#ifndef GWL_USERDATA
#define GWL_USERDATA -21
#endif
LRESULT CALLBACK AppWndProc(HWND _hWnd, gzUInt uMsg, WPARAM wParam, LPARAM lParam){
using namespace Lib_GZ::Sys::Window;
using namespace Lib_GZ::Sys::Message;
//using namespace GZ_Windows::Sys::Message;
//return DefWindowProc(_hWnd, uMsg, wParam, lParam);
cContextLink *_this = (cContextLink*)GetWindowLongPtr(_hWnd, GWL_USERDATA);
if(_this == 0  ){ //|| _this->hWinClickNew == eWinClick::Close || ::GZ::Global::nNumWindows == 0
switch(uMsg){
case WM_NCCREATE:
//Create "this pointer"
SetWindowLongPtr(_hWnd, GWL_USERDATA, (LONG_PTR) ((CREATESTRUCT*)lParam)->lpCreateParams);
break;
}
return DefWindowProc(_hWnd, uMsg, wParam, lParam);
}
return DefWindowProc(_hWnd, uMsg, wParam, lParam);
}
// --------------------------- //

}

GZ_mCppClass(OpContext)

cOpContext::cOpContext(Lib_GZ::cBase* _parent) : Lib_GZ::Sys::cContext(_parent){
	//GZ_mArray_NewStringE(sIcon); //Todo
	hWinClickNew = Lib_GZ::Sys::Window::eWinClick::None;

}

void cOpContext::Ini_cOpContext(Lib_GZ::Gfx::cInterface* _oInterface, gzPStr _sWindowName, gzUInt _nFrameWidth, gzUInt _nFrameHeight, gzBool _bTransparent, gzInt _nBgColor){ gz_(0)
	Lib_GZ::Sys::Debug::Get(thread)->fTrace1(gzStrL("---New OpWindows--"));
	Ini_cContext((Lib_GZ::Gfx::cInterface*)(_oInterface), _sWindowName, _nFrameWidth, _nFrameHeight, _bTransparent, _nBgColor);
}

void csOpContext::fManageMessageOp(){ gz_(1)
	//Tag cpp
	static MSG msg;
	while (PeekMessage(&msg, GZ_Null, 0, 0, PM_REMOVE) > 0){
	if (msg.message == WM_QUIT){
	break;
	}
	TranslateMessage(&msg);
	DispatchMessage(&msg);
	}
}

void cOpContext::fMove(gzInt _nPosX, gzInt _nPosY){ gz_(2)
	GZ_mIsImplemented("GzWindows::OpContext::fMove")
}

void cOpContext::fMoveAndSize(gzInt _nPosX, gzInt _nPosY, gzInt _nWidth, gzInt _nHeight){ gz_(3)
	GZ_mIsImplemented("GzWindows::OpContext::fMoveAndSize")
}

void cOpContext::fShow(gzBool _bActive){ gz_(4)
	GZ_mIsImplemented("GzWindows::OpContext::fShow")
}

void cOpContext::fHide(){ gz_(5)
	GZ_mIsImplemented("GzWindows::OpContext::fHide")
}

void cOpContext::fIniProcess(){ gz_(6)
	GZ_mIsImplemented("GzWindows::OpContext::fIniProcess")
}

void cOpContext::fMinimize(){ gz_(7)
	GZ_mIsImplemented("GzWindows::OpContext::fMinimize")
}

void cOpContext::fMaximize(){ gz_(8)
	GZ_mIsImplemented("GzWindows::OpContext::fMaximize")
}

void cOpContext::fRestore(){ gz_(9)
	GZ_mIsImplemented("GzWindows::OpContext::fRestore")
}

void cOpContext::fDisable(){ gz_(10)
	GZ_mIsImplemented("GzWindows::OpContext::fDisable")
}

void cOpContext::fSendData(gzUInt _nOtherWinId){ gz_(11)
	GZ_mIsImplemented("GzWindows::OpContext::fSendData")
}

void cOpContext::fReceiveMessage(gzPStr _sMessage){ gz_(12)
	GZ_mIsImplemented("GzWindows::OpContext::fReceiveMessage")
}

void cOpContext::drawPixel(){ gz_(13)
	GZ_mIsImplemented("GzWindows::OpContext::drawPixel")
}

gzInt cOpContext::fKeyIsDown(gzInt _nKeyVal){ gz_(14)
	GZ_mIsImplemented("GzWindows::OpContext::fKeyIsDown")
	return 0;
}

void cOpContext::fCpuVSyncOnGpu(){ gz_(15)
	GZ_mIsImplemented("GzWindows::OpContext::fCpuVSyncOnGpu")
}

gzBool cOpContext::fIsWindowReady(){ gz_(16)
	GZ_mIsImplemented("GzWindows::OpContext::fIsWindowReady")
	return false;
}

void cOpContext::fIniRender(){ gz_(17)
	GZ_mIsImplemented("GzWindows::OpContext::fIniRender")
}

void cOpContext::fGetMousePosition(){ gz_(18)
	GZ_mIsImplemented("GzWindows::OpContext::fGetMousePosition")
}

void cOpContext::fStartCaptureOutside(){ gz_(19)
	GZ_mIsImplemented("GzWindows::OpContext::fStartCaptureOutside")
}

void cOpContext::fStopCaptureOutside(){ gz_(20)
	GZ_mIsImplemented("GzWindows::OpContext::fStopCaptureOutside")
}

void cOpContext::fFrameEnd(){ gz_(21)
	GZ_mIsImplemented("GzWindows::OpContext::fFrameEnd")
}

gzInt** cOpContext::fGetPixelArray(){ gz_(22)
	GZ_mIsImplemented("GzWindows::OpContext::fGetPixelArray")
	return zNull;
}

void cOpContext::fGetKey(Lib_GZ::Input::cKey* _oKey){ gz_(23)
	GZ_mIsImplemented("GzWindows::OpContext::fGetKey")
}

cOpContext::~cOpContext(){
}



}}