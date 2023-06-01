#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, div1)
{
	Cal* cal = new Cal();
	EXPECT_EQ(2, cal->getDivide(6, 3));
}