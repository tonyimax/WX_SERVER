#include "StdAfx.h"
#include "WHCommandLine.h"
CWHCommandLine::CWHCommandLine(){}
CWHCommandLine::~CWHCommandLine(){}
WORD CWHCommandLine::GetRoomId(LPCTSTR param) {
	CString a(param);
	//_wtol��CStringת��ΪLONGȻ��ǿתΪWORD
	return  (WORD)_wtol(a.Right(a.GetLength() - strlen("/ServerID:")));
}