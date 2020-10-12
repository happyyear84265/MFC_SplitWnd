
// DlgProxy.h: 標頭檔
//

#pragma once

class CMFCApplication2Dlg;


// CMFCApplication2DlgAutoProxy 命令目標

class CMFCApplication2DlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CMFCApplication2DlgAutoProxy)

	CMFCApplication2DlgAutoProxy();           // 動態建立所使用的保護建構函式

// 屬性
public:
	CMFCApplication2Dlg* m_pDialog;

// 作業
public:

// 覆寫
	public:
	virtual void OnFinalRelease();

// 程式碼實作
protected:
	virtual ~CMFCApplication2DlgAutoProxy();

	// 產生的訊息對應函式

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CMFCApplication2DlgAutoProxy)

	// 產生的 OLE 分派對應函式

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

