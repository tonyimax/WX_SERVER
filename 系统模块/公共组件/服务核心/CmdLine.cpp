#include "StdAfx.h"
#include "CmdLine.h"
CmdLine::CmdLine(){}
CmdLine::~CmdLine(){}
WORD CmdLine::GetRoomId(LPCTSTR param) {
	CString a(param);
	//_wtol将CString转换为LONG然后强转为WORD
	return  (WORD)_wtol(a.Right(a.GetLength() - strlen("/ServerID:")));
}