#ifndef WH_COMMAND_LINE_HEAD_FILE
#define WH_COMMAND_LINE_HEAD_FILE
#pragma once
#include "ServiceCoreHead.h"
class SERVICE_CORE_CLASS CWHCommandLine
{
public:
	CWHCommandLine();
	virtual ~CWHCommandLine();
public:
	WORD GetRoomId(LPCTSTR param);//���ݲ������ҷ����
};
#endif