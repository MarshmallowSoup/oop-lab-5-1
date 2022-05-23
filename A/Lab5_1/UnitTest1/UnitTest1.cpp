#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_1/Time.cpp"
#include "../Lab5_1/Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Time k;
			k.set_first(3);
			k.set_second(9);
			Assert::AreEqual(189, k.minutes());
		}
	};
}