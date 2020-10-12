// FormView2.cpp: 實作檔案
//

#include "pch.h"
#include "MFCApplication1.h"
#include "FormView2.h"


// FormView2

IMPLEMENT_DYNCREATE(FormView2, CFormView)

FormView2::FormView2()
	: CFormView(IDD_FORMVIEW2)
{

}

FormView2::~FormView2()
{
}

void FormView2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(FormView2, CFormView)
END_MESSAGE_MAP()


// FormView2 診斷

#ifdef _DEBUG
void FormView2::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void FormView2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// FormView2 訊息處理常式
