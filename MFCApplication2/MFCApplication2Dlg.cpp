
// MFCApplication2Dlg.cpp: 實作檔案
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication2.h"
#include "MFCApplication2Dlg.h"
#include "DlgProxy.h"
#include "afxdialogex.h"
#include "FORMVIEW1.h"
#include "FORMVIEW2.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2Dlg 對話方塊


IMPLEMENT_DYNAMIC(CMFCApplication2Dlg, CDialog);

CMFCApplication2Dlg::CMFCApplication2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_MFCAPPLICATION2_DIALOG, pParent)
{
	EnableActiveAccessibility();
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pAutoProxy = nullptr;
}

CMFCApplication2Dlg::~CMFCApplication2Dlg()
{
	// 如果有此對話方塊的 Automation Proxy，
	//  請將其指向此對話方塊的返回指標設為 null，讓其知道
	// 所以會知道是否已經刪除對話方塊。
	if (m_pAutoProxy != nullptr)
		m_pAutoProxy->m_pDialog = nullptr;
}

void CMFCApplication2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication2Dlg, CDialog)
	ON_WM_CLOSE()
	ON_WM_PAINT()
	ON_WM_CREATE()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// CMFCApplication2Dlg 訊息處理常式

BOOL CMFCApplication2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	CRect cRect;
	GetWindowRect(&cRect);
	ScreenToClient(&cRect);
	m_pMyFrame->MoveWindow(&cRect);
	m_pMyFrame->ShowWindow(SW_SHOW);
	// 設定此對話方塊的圖示。當應用程式的主視窗不是對話方塊時，
	// 框架會自動從事此作業
	SetIcon(m_hIcon, TRUE);			// 設定大圖示
	SetIcon(m_hIcon, FALSE);		// 設定小圖示

	// TODO: 在此加入額外的初始設定

	return TRUE;  // 傳回 TRUE，除非您對控制項設定焦點
}

int CMFCApplication2Dlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	// Because the CFRameWnd needs a window class, we will create a new one. I just copied the sample from MSDN Help.
	// When using it in your project, you may keep CS_VREDRAW and CS_HREDRAW and then throw the other three parameters.
	//需要注册窗口类
	CString strMyClass = AfxRegisterWndClass(CS_VREDRAW | CS_HREDRAW,
		::LoadCursor(NULL, IDC_ARROW), (HBRUSH) ::GetStockObject(WHITE_BRUSH),
		::LoadIcon(NULL, IDI_APPLICATION));

	// Create the frame window with "this" as the parent
	m_pMyFrame = new CFrameWnd;
	m_pMyFrame->Create(strMyClass, L"", WS_CHILD, CRect(0, 0, 200, 200), this);
	m_pMyFrame->ShowWindow(SW_SHOW);
	// and finally, create the splitter with the frame as the parent
	if (m_SplitterWnd.CreateStatic(m_pMyFrame, 1, 2) == NULL) //1行2列
		return -1;

	if (m_SplitterWnd2.CreateStatic(&m_SplitterWnd, 2, 1, WS_CHILD | WS_VISIBLE, m_SplitterWnd.IdFromRowCol(0, 1)) == NULL)
		return -1;

	m_SplitterWnd.CreateView(0, 0, RUNTIME_CLASS(FORMVIEW1),CSize(100, 100), NULL);

	m_SplitterWnd2.CreateView(0, 0, RUNTIME_CLASS(FORMVIEW2),CSize(80, 80), NULL);

	m_SplitterWnd2.CreateView(1, 0, RUNTIME_CLASS(FORMVIEW2),CSize(80, 80), NULL);
	return 0;
}

// 如果將最小化按鈕加入您的對話方塊，您需要下列的程式碼，
// 以便繪製圖示。對於使用文件/檢視模式的 MFC 應用程式，
// 框架會自動完成此作業。

void CMFCApplication2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 繪製的裝置內容

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 將圖示置中於用戶端矩形
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 描繪圖示
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// 當使用者拖曳最小化視窗時，
// 系統呼叫這個功能取得游標顯示。
HCURSOR CMFCApplication2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

// 如果控制器仍保持其物件之一，而使用者
// 關閉 UI 時，Automation 伺服器不應該結束。
// 這些訊息處理常式會確認是否仍在使用 Proxy，
// 如果已結束使用，則會隱藏 UI，但是對話方塊
// 仍保持在附近。

void CMFCApplication2Dlg::OnClose()
{
	if (CanExit())
		CDialog::OnClose();
}

void CMFCApplication2Dlg::OnOK()
{
	if (CanExit())
		CDialog::OnOK();
}

void CMFCApplication2Dlg::OnCancel()
{
	if (CanExit())
		CDialog::OnCancel();
}

BOOL CMFCApplication2Dlg::CanExit()
{
	// 如果 Proxy 物件仍在附近，則 Automation 控制器
	// 仍掌控此應用程式。請將對話方塊保持在附近，
	// 但是隱藏其 UI。
	if (m_pAutoProxy != nullptr)
	{
		ShowWindow(SW_HIDE);
		return FALSE;
	}

	return TRUE;
}

