#pragma once
#include <afxext.h>
class MySplitterWnd :
    public CSplitterWnd
{
public:
	MySplitterWnd();
	virtual ~MySplitterWnd();

	DECLARE_MESSAGE_MAP()

	afx_msg void OnMouseMove(UINT nFlags, CPoint pt);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint pt);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint pt);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint pt);


};

