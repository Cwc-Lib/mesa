#include "Lib_GZ_Windows/Sys/OpFile.h"

#include "Lib_GZ/Sys/File.h"
#include "Lib_GZ/File/Resource.h"
#include "Lib_GZ/Sys/Debug.h"
#include "Lib_GZ/Class.h"
#include "Lib_GZ/ThreadMsg.h"


namespace Lib_GZ_Windows{namespace Sys{namespace OpFile{
////// Current Lib Access  ////
//// Current Static Access ////
#undef _
#define _ OpFile
void Ini_Class(){
}
#ifdef GZ_tHaveCallStack
gzFuncStack zFuncName[] = {{0,"fGetExePath"},{0,"fLoadFile"},{0,"OpFile"}};
#endif
///////////////////////////////

}

GZ_mCppClass(OpFile)

gzStr csOpFile::fGetExePath(){ gz_(0)
	//Tag cpp
	#define MAX_PATH 260
	wchar_t result[ MAX_PATH ];
	GetModuleFileNameW( NULL, result, MAX_PATH ); //MinReq:  WinXp
	//Get length
	gzInt _nLength = 0;
	for(gzInt i  = 0; i < MAX_PATH; i++){
	if(result[i] == 0){
	break;
	}
	_nLength++;
	}
	///////
	gzStr _sPath((gzUInt16*)result);
	_sPath.fReplaceAll(gzStrL("\\"), gzStrL("/"));
	_sPath.fBegin();
	return _sPath;  //Call GZ_fUnSet(_sVal);
	//return "E:/FlashDev/_MyProject/Simacode/LDK/LinxDemo/_out/_MainDemo/Windows/Debug/bin/";
	return gzStrL("");
}

gzBool csOpFile::fLoadFile(Lib_GZ::File::cResource* _oRc, gzPStr _sFullPath){ gz_(1)
	Lib_GZ::Sys::pDebug::fConsole(gzStrL("Overcplace fLoadFile not impletmented"));
	//Tag cpp
	gzUTF16 _wcFile(_sFullPath);
	FILE*  f = _wfopen((wchar_t*)(gzUInt16*)_wcFile, L"rb+");
	unsigned char *result;
	if (f != NULL){
	WIN32_FILE_ATTRIBUTE_DATA fa;
	if (!GetFileAttributesExW((LP)(gzUInt16*)_wcFile, GetFileExInfoStandard, &fa)){
	// error handling
	}
	gzUIntX _nSize =   ((gzUInt64)fa.nFileSizeHigh << 32) | fa.nFileSizeLow;
	gzUInt8* _aData = new gzUInt8[_nSize];
	fread(_aData, 1, _nSize, f);
	_oRc->fSetDynamicMemData(_aData, _nSize); //Will be auto free
	Lib_GZ::Sys::pDebug::fConsole(gzStrL("---File Open!-- ") + _sFullPath);
	return true;
	}else{
	Lib_GZ::Sys::pDebug::fConsole(gzStrL("Error, can't open file : ") + _sFullPath);
	}
	fclose(f);
	return false;
	return false;
}

cOpFile::cOpFile(Lib_GZ::cBase* _parent) : Lib_GZ::Sys::cFile(_parent){

}

void cOpFile::Ini_cOpFile(){ gz_(2)
	Ini_cFile();
}

gzAny cOpFile::MemCopy(){
return (gzAny)new cOpFile(*this);
}
gzAny cOpFile::DeepCopy(){
return (gzAny)new cOpFile(*this, true);
}
cOpFile::~cOpFile(){
}



}}