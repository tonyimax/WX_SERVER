#ifndef SERVICE_CORE_HEAD_FILE
#define SERVICE_CORE_HEAD_FILE

#include <Nb30.h>
#include <Afxmt.h>
#include <AtlBase.h>
#include "..\..\全局定义\Platform.h"

//导出定义
#ifndef SERVICE_CORE_CLASS
	#ifdef  SERVICE_CORE_DLL
		#define SERVICE_CORE_CLASS _declspec(dllexport) //导出约定
	#else
		#define SERVICE_CORE_CLASS _declspec(dllimport) //导入约定
	#endif
#endif

//模块定义
#ifndef _DEBUG
	#define SERVICE_CORE_DLL_NAME	TEXT("ServiceCore.dll") //Release版本
#else
	#define SERVICE_CORE_DLL_NAME	TEXT("ServiceCoreD.dll") //Debug版本
#endif

//导出文件
#ifndef SERVICE_CORE_DLL
	#include "WHThread.h"
	#include "WHRegKey.h"
	#include "WHEncrypt.h"
	#include "WHService.h"
	#include "WHIniData.h"
	#include "WHDataQueue.h"
	#include "WHDataLocker.h"
	#include "CmdLine.h"
	#include "WHMD5CheckSum.h"
#endif

#endif