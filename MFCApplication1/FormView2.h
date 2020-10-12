#pragma once



// FormView2 表單檢視

class FormView2 : public CFormView
{
	DECLARE_DYNCREATE(FormView2)

protected:
	FormView2();           // 動態建立所使用的保護建構函式
	virtual ~FormView2();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW2 };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
};


