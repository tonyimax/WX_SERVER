#include "StdAfx.h"
#include "CmdLine.h"
CmdLine::CmdLine(){}
CmdLine::~CmdLine(){}
WORD CmdLine::GetRoomId(LPCTSTR param) {
	CString a(param);
	//_wtol��CStringת��ΪLONGȻ��ǿתΪWORD
	return  (WORD)_wtol(a.Right(a.GetLength() - strlen("/ServerID:")));
}