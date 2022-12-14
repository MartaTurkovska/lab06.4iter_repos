#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4(iter)/lab_06.4iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64iter
{
	TEST_CLASS(UnitTest64iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[4]{-1, 2, 5, 8};
			c = Sum(a, 4);
			Assert::AreEqual(c, 0);
		}
	};
}
