// Pr_III.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.

#include <iostream>
#include <windows.h>
#include <gdiplus.h>
#include "stdafx.h"

using namespace Gdiplus;


int main()
{
	ULONG_PTR m_gdiplusToken;
	GdiplusStartupInput gdiplusStartupInput;
	GdiplusStartup(&m_gdiplusToken, &gdiplusStartupInput, NULL);

	GdiplusShutdown(m_gdiplusToken);
	system("PAUSE");
	return 0;
}

