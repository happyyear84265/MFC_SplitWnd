
// DlgProxy.cpp: 實作檔案
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication2.h"
#include "DlgProxy.h"
#include "MFCApplication2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication2DlgAutoProxy

IMPLEMENT_DYNCREATE(CMFCApplication2DlgAutoProxy, CCmdTarget)

CMFCApplication2DlgAutoProxy::CMFCApplication2DlgAutoProxy()
{
	EnableAutomation();

	// 若要保持應用程式執行的時間與自動化一樣長
	//	建構函式必須呼叫 AfxOleLockApp。
	AfxOleLockApp();

	// 經由應用程式主視窗指標，取得對對話方塊的存取。
	// 將 Proxy 的內部指標設定為指向對話方塊，
	// 並設定指向此 Proxy 的
	// 對話方塊返回指標。
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CMFCApplication2Dlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CMFCApplication2Dlg)))
		{
			m_pDialog = reinterpret_cast<CMFCApplication2Dlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CMFCApplication2DlgAutoProxy::~CMFCApplication2DlgAutoProxy()
{
	// 若要在使用 Automation 建立了所有物件之後結束應用程式，
	//	 解構函式必須呼叫 AfxOleUnlockApp。
	// 此外，這會摧毀主對話方塊
	if (m_pDialog != nullptr)
		m_pDialog->m_pAutoProxy = nullptr;
	AfxOleUnlockApp();
}

void CMFCApplication2DlgAutoProxy::OnFinalRelease()
{
	// 當釋放 Automation 物件最後的參考時，
	// 會呼叫 OnFinalRelease。基底類別會自動
	// 刪除物件。呼叫基底類別前，請先加入您物件所需的額外清除 (Cleanup)
	// 程式碼。

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CMFCApplication2DlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMFCApplication2DlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// 備註: 我們新增了對 IID_IMFCApplication2 的支援以支援型別安全繫結
//  以便從 VBA 支援類型安全繫結。此 IID 必須與 .IDL 檔中，
// 附加至分配介面 (Dispinterface) 的 GUID 相符。

// {a17fed6a-6c5b-43aa-af2b-1858700695aa}
static const IID IID_IMFCApplication2 =
{0xa17fed6a,0x6c5b,0x43aa,{0xaf,0x2b,0x18,0x58,0x70,0x06,0x95,0xaa}};

BEGIN_INTERFACE_MAP(CMFCApplication2DlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CMFCApplication2DlgAutoProxy, IID_IMFCApplication2, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 的巨集會在此專案的 pch.h 中定義
// {fd2056e3-2b85-47a8-b770-c0841eae7f73}
IMPLEMENT_OLECREATE2(CMFCApplication2DlgAutoProxy, "MFCApplication2.Application", 0xfd2056e3,0x2b85,0x47a8,0xb7,0x70,0xc0,0x84,0x1e,0xae,0x7f,0x73)


// CMFCApplication2DlgAutoProxy 訊息處理常式
