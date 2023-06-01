#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseNameMinus, TestName) {
	Cal* cal = new Cal();
	EXPECT_EQ(2, cal->getMinus(5,3));
}