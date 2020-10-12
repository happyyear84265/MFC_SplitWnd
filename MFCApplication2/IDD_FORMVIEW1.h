#pragma once


// IDD_FORMVIEW1 對話方塊

class IDD_FORMVIEW1 : public CDialogEx
{
	DECLARE_DYNAMIC(IDD_FORMVIEW1)

public:
	IDD_FORMVIEW1(CWnd* pParent = nullptr);   // 標準建構函式
	virtual ~IDD_FORMVIEW1();

// 對話方塊資料
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
};
