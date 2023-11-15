#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1.char/char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str);
			Assert::AreEqual(2, result);

		}
	};
}
