#include "ExcelLIB.h"

#ifdef _DEBUG

#pragma comment(lib, "ExcelLIB_Debug.lib")

#else

#pragma comment(lib, "ExcelLIB.lib")

#endif // _DEBUG

using namespace CExcel;

int main()
{
	CExcel::CExcelLIB excel;

	int a = excel.Add(1, 2);

	std::cout << a << std::endl;

	return 0;
}