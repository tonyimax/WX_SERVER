#include "Stdafx.h"
#include "AfxDllx.h"
#include "ServiceCoreHead.h"

//DLL��ʼ���ڼ�ʹ�ã����MFC
static AFX_EXTENSION_MODULE ServiceCoreDLL={NULL,NULL};
//��������
extern "C" int APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason==DLL_PROCESS_ATTACH) //DLL����
	{
		if (!AfxInitExtensionModule(ServiceCoreDLL, hInstance)) return 0;
		new CDynLinkLibrary(ServiceCoreDLL);
	}
	else if (dwReason==DLL_PROCESS_DETACH) //DLL����
	{
		AfxTermExtensionModule(ServiceCoreDLL);
	}

	return 1;
}

//////////////////////////////////////////////////////////////////////////////////
