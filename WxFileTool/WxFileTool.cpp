// WxFileTool.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "WxFileTool.h"
#include"ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ��  ����ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CWxFileToolApp

BEGIN_MESSAGE_MAP(CWxFileToolApp, CWinApp)
	ON_COMMAND(ID_32771, &CWxFileToolApp::OnWxFileTool)
END_MESSAGE_MAP()


// CWxFileToolApp ����

CWxFileToolApp::CWxFileToolApp()
{
	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CWxFileToolApp ����

CWxFileToolApp theApp;


// CWxFileToolApp ��ʼ��

BOOL CWxFileToolApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}


void CWxFileToolApp::OnWxFileTool()
{
	// TODO:  �ڴ���������������
	CRuntimeClass* pThis = RUNTIME_CLASS(CChildFrame);
	CWnd *main = AfxGetMainWnd();
	DWORD data[2] = { 0 };
	data[0] = (DWORD)pThis;
	data[1] = IDR_MAINFRAME;
	main->SendMessage(WM_LOAD_CHILDWIN, (WPARAM)m_hInstance, (LPARAM)&data);
}
