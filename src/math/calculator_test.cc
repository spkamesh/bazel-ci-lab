#include "src/math/calculator.h"
#include <gtest/gtest.h>

namespace lab {

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, Addition) {
    EXPECT_EQ(calc.Add(3, 4),   7);
    EXPECT_EQ(calc.Add(-5, 5),  0);
    EXPECT_EQ(calc.Add(0, 0),   0);
}

TEST_F(CalculatorTest, Subtraction) {
    EXPECT_EQ(calc.Subtract(10, 4), 6);
    EXPECT_EQ(calc.Subtract(0, 5),  -5);
}

TEST_F(CalculatorTest, Multiplication) {
    EXPECT_EQ(calc.Multiply(6, 7),  42);
    EXPECT_EQ(calc.Multiply(-3, 4), -12);
    EXPECT_EQ(calc.Multiply(0, 99),  0);
}

TEST_F(CalculatorTest, Division) {
    EXPECT_DOUBLE_EQ(calc.Divide(10, 4), 2.5);
    EXPECT_DOUBLE_EQ(calc.Divide(9,  3), 3.0);
    EXPECT_DOUBLE_EQ(calc.Divide(1,  3), 1.0 / 3.0);
}

TEST_F(CalculatorTest, DivisionByZeroThrows) {
    EXPECT_THROW(calc.Divide(5, 0), std::invalid_argument);
}

TEST_F(CalculatorTest, Factorial) {
    EXPECT_EQ(calc.Factorial(0),  1LL);
    EXPECT_EQ(calc.Factorial(1),  1LL);
    EXPECT_EQ(calc.Factorial(5),  120LL);
    EXPECT_EQ(calc.Factorial(10), 3628800LL);
}

TEST_F(CalculatorTest, FactorialNegativeThrows) {
    EXPECT_THROW(calc.Factorial(-1), std::invalid_argument);
}

}  // namespace lab
