// FORMVIEW2.cpp: 實作檔案
//

#include "pch.h"
#include "MFCApplication2.h"
#include "FORMVIEW2.h"


// FORMVIEW2

IMPLEMENT_DYNCREATE(FORMVIEW2, CFormView)

FORMVIEW2::FORMVIEW2()
	: CFormView(IDD_FORMVIEW2)
{

}

FORMVIEW2::~FORMVIEW2()
{
}

void FORMVIEW2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(FORMVIEW2, CFormView)
END_MESSAGE_MAP()


// FORMVIEW2 診斷

#ifdef _DEBUG
void FORMVIEW2::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void FORMVIEW2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// FORMVIEW2 訊息處理常式
