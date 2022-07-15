#include "ExcelLIB.h"

CExcel::CExcelLIB::CExcelLIB()
{
#ifdef _DEBUG

	m_hMod = LoadLibraryA("../Bin/Debug/ExcelDLL.dll");

#else

	m_hMod = LoadLibraryA("../Bin/Release/ExcelDLL.dll");

#endif // _DEBUG

	m_pAdd = (int (*)(int, int))(GetProcAddress(m_hMod, "Add"));
}

CExcel::CExcelLIB::~CExcelLIB()
{
}

int CExcel::CExcelLIB::Add(int a, int b)
{
	std::cout << (*m_pAdd)(a, b) << std::endl;

	int _a = (*m_pAdd)(a, b);

	std::cout << _a << std::endl;

	return (*m_pAdd)(a, b);
}
