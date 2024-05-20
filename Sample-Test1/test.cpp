#include "pch.h"
#include "../Calc_PRTest/calc.cpp"

TEST(TestCaseName, CalculatorMinus) {
	Calc calc;
	EXPECT_EQ(0, calc.getMinus(1, 1));
	EXPECT_EQ(1, calc.getMinus(2, 1));
	EXPECT_EQ(-1, calc.getMinus(1, 2));
}