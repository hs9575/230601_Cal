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
TEST(TestCaseName, Gop_2_3)
{
	Cal* cal = new Cal();	
	EXPECT_EQ(6, cal->getGop(2, 3));
}

TEST(TestCaseNameMinus, TestName) {
	Cal* cal = new Cal();
	EXPECT_EQ(2, cal->getMinus(5,3));
}

TEST(TestCaseName, TestSum) {
	Cal* cal = new Cal();
	EXPECT_EQ(7, cal->getSum(3, 4));
}

TEST(TestCaseName, TestSumSum) {
	Cal* cal = new Cal();
	EXPECT_EQ(11, cal->getSumSum(3, 4, 4));
}

TEST(TestCaseName, TestZegop) {
	Cal* cal = new Cal();
	EXPECT_EQ(4, cal->getZegop(2));
}