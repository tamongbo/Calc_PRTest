#include "pch.h"
#include "../Calc_PRTest/calc.cpp"

TEST(TestCal, Sum) {
	Calc calc;
	EXPECT_EQ(3, calc.getSum(1, 2));
}

TEST(TestCal, CalculatorMinus) {
	Calc calc;
	EXPECT_EQ(0, calc.getMinus(1, 1));
	EXPECT_EQ(1, calc.getMinus(2, 1));
	EXPECT_EQ(-1, calc.getMinus(1, 2));
}
