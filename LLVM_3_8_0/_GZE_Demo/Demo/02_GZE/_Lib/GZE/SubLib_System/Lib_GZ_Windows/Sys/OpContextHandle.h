#if !( defined tHDef_Lib_GZ_Windows_Sys_OpContextHandle || defined  tHDef_IN_Lib_GZ_Sys_ContextHandle || defined  tHDef_IN_Lib_GZ_Class)
#pragma once
#define tHDef_Lib_GZ_Windows_Sys_OpContextHandle
namespace Lib_GZ_Windows{namespace Sys{class cOpContextHandle;}}

#include "Lib_GZ_Windows/Lib_GZ_Windows.h"
#include "Lib_GZ/GZ.h"
#include "Lib_GZ/Thread.h"
#include "Lib_GZ/Sys/ContextHandle.h"
// ------  Cpp section  ------ //
#include "Lib_GZ/SysUtils/WindowsHeader.h"
// --------------------------- //

namespace Lib_GZ_Windows{namespace Sys{namespace OpContextHandle{

//Structure Definition

}}}

//Optimised Class include -> direct class or header of header (Constants)
namespace Lib_GZ{namespace Sys{class cSystem;}}
namespace Lib_GZ{namespace Sys{namespace Message{class cContextLink;}}}
namespace Lib_GZ_Windows{namespace Sys{class cOpContext;}}
namespace Lib_GZ{namespace Sys{class cContextHandle;}}
namespace Lib_GZ_Windows{namespace Sys{class cOpContextHandle;}}
namespace Lib_GZ{namespace Sys{class cDebug;}}
namespace Lib_GZ{class cClass;}
namespace Lib_GZ{class cThreadMsg;}

namespace Lib_GZ_Windows{namespace Sys{namespace OpContextHandle{


	//Structure Implementation

	//Unit creation
	//Unit destruction
	//Unit array write

}
class tApi_Lib_GZ_Windows pOpContextHandle {

	public:
	//Pure Function

};

class tApi_Lib_GZ_Windows cOpContextHandle : public Lib_GZ::Sys::cContextHandle {

	public:


		//Var
		gzUIntX nMainInst;
		cOpContextHandle(Lib_GZ::cBase* _parent);
		virtual void Ini_cOpContextHandle(Lib_GZ::Sys::Message::cContextLink* _oLink);
		virtual gzBool fCreateContextHandle();
		virtual gzInt32* fIniPixelDrawZone();
		virtual gzUIntX fBlit();

		inline cOpContextHandle(const cOpContextHandle &_o)  : Lib_GZ::Sys::cContextHandle(_o), nMainInst(_o.nMainInst){};
		inline cOpContextHandle(const cOpContextHandle &_o, gzBool _b)  : Lib_GZ::Sys::cContextHandle(_o, _b), nMainInst(_o.nMainInst){};
		virtual gzAny MemCopy();
		virtual gzAny DeepCopy();
		virtual ~cOpContextHandle();

	private:

		//Var

};
class tApi_Lib_GZ_Windows csOpContextHandle : public Lib_GZ::Sys::csContextHandle  {

	public:
		//Object Creation Wrapper
		inline virtual gzSp<Lib_GZ::Sys::cContextHandle> New(Lib_GZ::cBase* _parent, Lib_GZ::Sys::Message::cContextLink* _oLink){
			gzSp<cOpContextHandle>_oTemp = gzSp<cOpContextHandle>(new cOpContextHandle(_parent));
			_oTemp->Ini_cOpContextHandle(_oLink);
			return _oTemp;
		}
		//Public static

		//Static function

		inline csOpContextHandle(Lib_GZ::cBase* _parent): Lib_GZ::Sys::csContextHandle(_parent){};
		inline ~csOpContextHandle(){};
};
GZ_mStaticClassOp(OpContextHandle, Lib_GZ::Sys::ContextHandle);
namespace OpContextHandle{
}}}
#endif