#pragma once

#include "ExcelInfo.h"

namespace CExcel
{
	class CExcelLIB
	{
	public:
		CExcelLIB();
		~CExcelLIB();

	private:
		HMODULE m_hMod;
		int (*m_pAdd)(int, int);

	public:
		int Add(int a, int b);
	};
}
