
// MFCApplication2Dlg.h: 標頭檔
//

#pragma once
#include "MySplitterWnd.h"
class CMFCApplication2DlgAutoProxy;


// CMFCApplication2Dlg 對話方塊
class CMFCApplication2Dlg : public CDialog
{
	DECLARE_DYNAMIC(CMFCApplication2Dlg);
	friend class CMFCApplication2DlgAutoProxy;

// 建構
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// 標準建構函式
	virtual ~CMFCApplication2Dlg();

// 對話方塊資料
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	CMFCApplication2DlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	CFrameWnd* m_pMyFrame;
	MySplitterWnd m_SplitterWnd, m_SplitterWnd2;

	BOOL CanExit();

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
};
