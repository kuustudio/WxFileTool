// WxFileTool.h : WxFileTool DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWxFileToolApp
// �йش���ʵ�ֵ���Ϣ������� WxFileTool.cpp
//

class CWxFileToolApp : public CWinApp
{
public:
	CWxFileToolApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnWxFileTool();
};
