#include "pch.h"
#include "CSplitterWndEx.h"

BEGIN_MESSAGE_MAP(CSplitterWndExx, CSplitterWnd)
	//{{AFX_MSG_MAP(MySplitter)
	ON_WM_NCHITTEST()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


CSplitterWndExx::CSplitterWndExx()
{
}

CSplitterWndExx::~CSplitterWndExx()
{
}

UINT CSplitterWndExx::OnNcHitTest(CPoint point)
{
	return HTNOWHERE;
}

