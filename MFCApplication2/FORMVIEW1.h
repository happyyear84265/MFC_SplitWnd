#pragma once



// FORMVIEW1 表單檢視

class FORMVIEW1 : public CFormView
{
	DECLARE_DYNCREATE(FORMVIEW1)

protected:
	FORMVIEW1();           // 動態建立所使用的保護建構函式
	virtual ~FORMVIEW1();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW1 };
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


