#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_4/PR5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double eps = 1e-5;
			double z = S1(10, 1);
			Assert::IsTrue(z - 5.62437 < eps);
		}
	};
}
