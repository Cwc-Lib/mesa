#if !( defined tHDef_Lib_GZ_Windows_Sys_OpContext || defined  tHDef_IN_Lib_GZ_Sys_Context || defined  tHDef_IN_Lib_GZ_Sys_Window || defined  tHDef_IN_Lib_GZ_Class)
#pragma once
#define tHDef_Lib_GZ_Windows_Sys_OpContext
#define tHDef_IN_Lib_GZ_Windows_Sys_OpContext
namespace Lib_GZ_Windows{namespace Sys{class cOpContext;}}

#include "Lib_GZ_Windows/Lib_GZ_Windows.h"
#include "Lib_GZ/GZ.h"
#include "Lib_GZ/Thread.h"
#include "Lib_GZ/Sys/Context.h"
// ------  Cpp section  ------ //
#include "Lib_GZ/SysUtils/WindowsHeader.h"
// --------------------------- //

namespace Lib_GZ_Windows{namespace Sys{namespace OpContext{

//Structure Definition

}}}

//Optimised Class include -> direct class or header of header (Constants)
namespace Lib_GZ{namespace Gpu{class cGpu;}}
namespace Lib_GZ{namespace Gfx{class cInterface;}}
#include "Lib_GZ/Input/_Key.h"
namespace Lib_GZ{namespace Sys{class cContext;}}
#include "Lib_GZ/Sys/_Window.h"
namespace Lib_GZ{namespace Sys{class cSystem;}}
namespace Lib_GZ_Windows{namespace Sys{class cOpContext;}}
namespace Lib_GZ{namespace Sys{class cDebug;}}
namespace Lib_GZ{class cClass;}
namespace Lib_GZ{class cThreadMsg;}

namespace Lib_GZ_Windows{namespace Sys{namespace OpContext{


	//Structure Implementation

	//Unit creation
	//Unit destruction
	//Unit array write

	// ------  Cpp section  ------ //
	LRESULT CALLBACK AppWndProc(HWND _hWnd, gzUInt uMsg, WPARAM wParam, LPARAM lParam);
	// --------------------------- //

}
class tApi_Lib_GZ_Windows pOpContext {

	public:
	//Pure Function

};

class tApi_Lib_GZ_Windows cOpContext : public Lib_GZ::Sys::cContext {

	public:


		//Var
		gzStr sIcon;
		Lib_GZ::Sys::Window::eWinClick hWinClickNew;
		cOpContext(Lib_GZ::cBase* _parent);
		virtual void Ini_cOpContext(Lib_GZ::Gfx::cInterface* _oInterface, gzPStr _sWindowName, gzUInt _nFrameWidth, gzUInt _nFrameHeight, gzBool _bTransparent = false, gzInt _nBgColor = gzInt(4294967295));
		virtual void fMove(gzInt _nPosX, gzInt _nPosY);
		virtual void fMoveAndSize(gzInt _nPosX, gzInt _nPosY, gzInt _nWidth, gzInt _nHeight);
		virtual void fShow(gzBool _bActive = true);
		virtual void fHide();
		virtual void fIniProcess();
		virtual void fMinimize();
		virtual void fMaximize();
		virtual void fRestore();
		virtual void fDisable();
		virtual void fSendData(gzUInt _nOtherWinId);
		virtual void drawPixel();
		virtual gzInt fKeyIsDown(gzInt _nKeyVal);
		virtual void fCpuVSyncOnGpu();
		virtual gzBool fIsWindowReady();
		virtual void fIniRender();
		virtual void fGetMousePosition();
		virtual void fStartCaptureOutside();
		virtual void fStopCaptureOutside();
		virtual void fFrameEnd();
		virtual gzInt** fGetPixelArray();
		virtual void fGetKey(Lib_GZ::Input::cKey* _oKey);

		inline cOpContext(const cOpContext &_o)  : Lib_GZ::Sys::cContext(_o), sIcon(_o.sIcon), hWinClickNew(){};
		inline cOpContext(const cOpContext &_o, gzBool _b)  : Lib_GZ::Sys::cContext(_o, _b), sIcon(_o.sIcon,_b), hWinClickNew(){};
		virtual ~cOpContext();

	private:

		//Var
		virtual void fReceiveMessage(gzPStr _sMessage);

};
class tApi_Lib_GZ_Windows csOpContext : public Lib_GZ::Sys::csContext  {

	public:
		//Object Creation Wrapper
		inline virtual gzSp<Lib_GZ::Sys::cContext> New(Lib_GZ::cBase* _parent, Lib_GZ::Gfx::cInterface* _oInterface, gzPStr _sWindowName, gzUInt _nFrameWidth, gzUInt _nFrameHeight, gzBool _bTransparent = false, gzInt _nBgColor = gzInt(4294967295)){
			gzSp<cOpContext>_oTemp = gzSp<cOpContext>(new cOpContext(_parent));
			_oTemp->Ini_cOpContext(_oInterface, _sWindowName, _nFrameWidth, _nFrameHeight, _bTransparent, _nBgColor);
			return _oTemp;
		}
		//Public static

		//Static function
		virtual void fManageMessageOp();

		gzQArray<gzInt> qaShort;
		inline csOpContext(Lib_GZ::cBase* _parent): Lib_GZ::Sys::csContext(_parent){};
		inline ~csOpContext(){};
};
GZ_mStaticClassOp(OpContext, Lib_GZ::Sys::Context);
namespace OpContext{
}}}
#undef tHDef_IN_Lib_GZ_Windows_Sys_OpContext
#endif