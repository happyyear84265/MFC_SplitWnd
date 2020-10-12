#pragma once



// FORMVIEW2 表單檢視

class FORMVIEW2 : public CFormView
{
	DECLARE_DYNCREATE(FORMVIEW2)

protected:
	FORMVIEW2();           // 動態建立所使用的保護建構函式
	virtual ~FORMVIEW2();

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


