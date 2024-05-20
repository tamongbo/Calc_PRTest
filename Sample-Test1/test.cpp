#include "pch.h"
#include "../Calc_PRTest/calc.cpp"

TEST(TestCal, Sum) {
	Calc calc;
	EXPECT_EQ(3, calc.getSum(1, 2));
}