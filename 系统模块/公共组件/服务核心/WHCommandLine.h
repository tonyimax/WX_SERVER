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
	WORD GetRoomId(LPCTSTR param);//根据参数查找房间号
};
#endif