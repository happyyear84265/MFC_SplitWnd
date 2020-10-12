// IDD_FORMVIEW2.cpp: 實作檔案
//

#include "pch.h"
#include "MFCApplication2.h"
#include "IDD_FORMVIEW2.h"


// IDD_FORMVIEW2

IMPLEMENT_DYNCREATE(IDD_FORMVIEW2, CFormView)

IDD_FORMVIEW2::IDD_FORMVIEW2()
	: CFormView(IDD_FORMVIEW2)
{

}

IDD_FORMVIEW2::~IDD_FORMVIEW2()
{
}

void IDD_FORMVIEW2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(IDD_FORMVIEW2, CFormView)
END_MESSAGE_MAP()


// IDD_FORMVIEW2 診斷

#ifdef _DEBUG
void IDD_FORMVIEW2::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void IDD_FORMVIEW2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// IDD_FORMVIEW2 訊息處理常式
