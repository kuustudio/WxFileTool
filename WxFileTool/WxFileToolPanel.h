#pragma once


// WxFileToolPanel �Ի���

class WxFileToolPanel : public CDialogEx
{
	DECLARE_DYNAMIC(WxFileToolPanel)

public:
	WxFileToolPanel(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~WxFileToolPanel();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
public:
	CWnd *pHexControl1;
	CWnd *pHexControl2;
	DWORD dwServerIp;
	DWORD dwPort;
	DWORD dwUin;
	DWORD dwSafecdnuin;
	CString strVer;
	DWORD dwSeq;
	DWORD dwClientVersion;
	CString strOsType;
	CString strNetType;
	CString strAcceptdupack;
	CString mLog;
public:
	static void __stdcall NetCallBack(unsigned int _socket, unsigned int msgType, unsigned char* msg, unsigned int bytes);
	static unsigned int clientid;
	static WxFileToolPanel *pMainPanel;
protected:
	afx_msg LRESULT OnUpdatelogwin(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};


//�Զ�����Ϣ

#define WM_UPDATELOGWIN (WM_USER + 0x001)