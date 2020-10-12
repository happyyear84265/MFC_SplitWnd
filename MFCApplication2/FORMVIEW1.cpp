// FORMVIEW1.cpp: 實作檔案
//

#include "pch.h"
#include "MFCApplication2.h"
#include "FORMVIEW1.h"


// FORMVIEW1

IMPLEMENT_DYNCREATE(FORMVIEW1, CFormView)

FORMVIEW1::FORMVIEW1()
	: CFormView(IDD_FORMVIEW1)
{

}

FORMVIEW1::~FORMVIEW1()
{
}

void FORMVIEW1::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(FORMVIEW1, CFormView)
END_MESSAGE_MAP()


// FORMVIEW1 診斷

#ifdef _DEBUG
void FORMVIEW1::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void FORMVIEW1::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// FORMVIEW1 訊息處理常式
