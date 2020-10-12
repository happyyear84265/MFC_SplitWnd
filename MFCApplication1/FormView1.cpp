// FormView1.cpp: 實作檔案
//

#include "pch.h"
#include "MFCApplication1.h"
#include "FormView1.h"


// FormView1

IMPLEMENT_DYNCREATE(FormView1, CFormView)

FormView1::FormView1()
	: CFormView(IDD_FORMVIEW1)
{

}

FormView1::~FormView1()
{
}

void FormView1::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(FormView1, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &FormView1::OnBnClickedButton1)
END_MESSAGE_MAP()


// FormView1 診斷

#ifdef _DEBUG
void FormView1::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void FormView1::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// FormView1 訊息處理常式


void FormView1::OnBnClickedButton1()
{
	MessageBox(0,0,0);
	// TODO: 在此加入控制項告知處理常式程式碼
}
