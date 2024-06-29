#include "StdAfx.h"
#include "WHCommandLine.h"
CWHCommandLine::CWHCommandLine(){}
CWHCommandLine::~CWHCommandLine(){}
WORD CWHCommandLine::GetRoomId(LPCTSTR param) {
	CString a(param);
	//_wtol将CString转换为LONG然后强转为WORD
	return  (WORD)_wtol(a.Right(a.GetLength() - strlen("/ServerID:")));
}