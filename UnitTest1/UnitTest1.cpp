#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = s(1);
			Assert::AreEqual(a, 1.1752, 0.00001);
		}
	};
}
