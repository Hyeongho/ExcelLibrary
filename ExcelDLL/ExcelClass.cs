using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
