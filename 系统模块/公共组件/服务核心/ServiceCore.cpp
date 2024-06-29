#include "Stdafx.h"
#include "AfxDllx.h"
#include "ServiceCoreHead.h"

//DLL初始化期间使用，针对MFC
static AFX_EXTENSION_MODULE ServiceCoreDLL={NULL,NULL};
//导出函数
extern "C" int APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason==DLL_PROCESS_ATTACH) //DLL附加
	{
		if (!AfxInitExtensionModule(ServiceCoreDLL, hInstance)) return 0;
		new CDynLinkLibrary(ServiceCoreDLL);
	}
	else if (dwReason==DLL_PROCESS_DETACH) //DLL分离
	{
		AfxTermExtensionModule(ServiceCoreDLL);
	}

	return 1;
}

//////////////////////////////////////////////////////////////////////////////////
