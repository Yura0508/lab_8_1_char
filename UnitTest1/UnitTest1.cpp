#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_char/lab_8_1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCount)
		{
			char str1[] = "while we wait, while working.";
			char str2[] = "no while here";
			char str3[] = "whilewhile";
			char str4[] = "nothing";

			Assert::AreEqual(2, Count(str1, "while"));
			Assert::AreEqual(1, Count(str2, "while"));
			Assert::AreEqual(2, Count(str3, "while"));
			Assert::AreEqual(0, Count(str4, "while"));
		}
		TEST_METHOD(TestChange)
		{
			char str1[] = "while we wait, while working.";
			char expected1[] = "*** we wait, *** working.";
			char str2[] = "no while here";
			char expected2[] = "no *** here";
			char str3[] = "whilewhile";
			char expected3[] = "******";

			// Виконуємо заміну
			Change(str1);
			Change(str2);
			Change(str3);

			// Перевіряємо результати
			Assert::AreEqual(expected1, str1);
			Assert::AreEqual(expected2, str2);
			Assert::AreEqual(expected3, str3);
		}

	};
}
