#ifndef SERVICE_CORE_HEAD_FILE
#define SERVICE_CORE_HEAD_FILE

#include <Nb30.h>
#include <Afxmt.h>
#include <AtlBase.h>
#include "..\..\ȫ�ֶ���\Platform.h"

//��������
#ifndef SERVICE_CORE_CLASS
	#ifdef  SERVICE_CORE_DLL
		#define SERVICE_CORE_CLASS _declspec(dllexport) //����Լ��
	#else
		#define SERVICE_CORE_CLASS _declspec(dllimport) //����Լ��
	#endif
#endif

//ģ�鶨��
#ifndef _DEBUG
	#define SERVICE_CORE_DLL_NAME	TEXT("ServiceCore.dll") //Release�汾
#else
	#define SERVICE_CORE_DLL_NAME	TEXT("ServiceCoreD.dll") //Debug�汾
#endif

//�����ļ�
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