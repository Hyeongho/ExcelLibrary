using System;
using System.Collections.Generic;
using System.Text;

namespace ExcelDLL
{
	class ExcelClass
	{
		[DllExport]
		public static int Add(int a, int b)
		{
			return a + b;
		}
	}
}
