#include "pch.h"
#include "MySplitterWnd.h"

BEGIN_MESSAGE_MAP(MySplitterWnd, CSplitterWnd)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

MySplitterWnd::MySplitterWnd()
{
}

MySplitterWnd::~MySplitterWnd()
{
}

void MySplitterWnd::OnMouseMove(UINT nFlags, CPoint pt)
{
	return;
}

void MySplitterWnd::OnLButtonDown(UINT nFlags, CPoint pt)
{
	return;
}

void MySplitterWnd::OnLButtonDblClk(UINT nFlags, CPoint pt)
{
	return;
}

void MySplitterWnd::OnLButtonUp(UINT nFlags, CPoint pt)
{
	return;
}