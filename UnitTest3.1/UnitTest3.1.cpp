#include "pch.h"
#include "CppUnitTest.h"
#include "../3.1/Date.cpp"
#include "../3.1/Date.h"
#include "../3.1/Triad.cpp"
#include "../3.1/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a(1, 1), b(9, 9);
			Assert::AreEqual(a < b, true);

		}
	};
}
