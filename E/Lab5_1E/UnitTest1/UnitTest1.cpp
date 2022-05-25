#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_1E/Object.cpp"
#include "../Lab5_1E/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			BitString q;
			q.setA(1);
			long expected = q.getA();
			Assert::AreEqual(expected, 1l);
		}
	};
}
