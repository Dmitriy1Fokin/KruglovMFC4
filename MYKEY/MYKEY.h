
// MYKEY.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CMYKEYApp:
// � ���������� ������� ������ ��. MYKEY.cpp
//

class CMYKEYApp : public CWinApp
{
public:
	CMYKEYApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CMYKEYApp theApp;
