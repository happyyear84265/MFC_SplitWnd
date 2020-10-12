#pragma once
#include <afxext.h>
class CSplitterWndExx :
    public CSplitterWnd
{
public:
	CSplitterWndExx();
	virtual ~CSplitterWndExx();
	afx_msg UINT OnNcHitTest(CPoint point);
	 DECLARE_MESSAGE_MAP()
};

