#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.2.1/PR3.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5;  // Replace with your test values
			int y = 3;
			int expected = MIN(SQR(x - Z), x - y);

			Assert::AreEqual(3,(x,y));
		}
	};
}
