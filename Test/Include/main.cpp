#include "ExcelLIB.h"

#ifdef _DEBUG

#pragma comment(lib, "ExcelLIB_Debug.lib")

#else

#pragma comment(lib, "ExcelLIB.lib")

#endif // _DEBUG

int main()
{
	CExcel::CExcelLIB excel;

	int ab = excel.Add(1, 2);

	std::cout << ab << std::endl;

	return 0;
}