#ifndef WH_COMMAND_LINE_HEAD_FILE
#define WH_COMMAND_LINE_HEAD_FILE
#pragma once
#include "ServiceCoreHead.h"
class SERVICE_CORE_CLASS CmdLine
{
public:
	CmdLine();
	virtual ~CmdLine();
public:
	WORD GetRoomId(LPCTSTR param);//���ݲ������ҷ����
};
#endif