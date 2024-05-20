#include "pch.h"
#include "../Calc_PRTest/calc.cpp"

TEST(CalcTest, getSumSumTestPositiveNum) {
	Calc calc;

	EXPECT_EQ(6, calc.getSumSum(1, 2, 3));
}

TEST(CalcTest, getSumSumTestNegativeNum) {
	Calc calc;

	EXPECT_EQ(-6, calc.getSumSum(-1, -2, -3));
}