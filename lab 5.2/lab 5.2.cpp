#include "pch.h"
#include "CppUnitTest.h"
#include "../labbb 5.2/labbb 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab52
{
	TEST_CLASS(lab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test;
			test = A(0, 1, 1);
			Assert::AreEqual(test, 0);

		}
	};
}
