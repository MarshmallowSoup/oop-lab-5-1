#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_1H/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point p;
			p.setX(0.0);
			p.setY(5.0);
			double actual = p.distanceToOrigin();
			double expected = 5.0;
			Assert::AreEqual(expected, actual);
		}
	};
}
