#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, Gop_2_3)
{
	Cal* cal = new Cal();	
	EXPECT_EQ(6, cal->getGop(2, 3));
}