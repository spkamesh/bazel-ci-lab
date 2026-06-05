#pragma once
#include <stdexcept>

namespace lab {

/// Four-function integer calculator
class Calculator {
public:
    int    Add     (int a, int b) const { return a + b; }
    int    Subtract(int a, int b) const { return a - b; }
    int    Multiply(int a, int b) const { return a * b; }

    double Divide  (int a, int b) const {
        if (b == 0)
            throw std::invalid_argument("Division by zero");
        return static_cast<double>(a) / static_cast<double>(b);
    }

    /// n! for n >= 0; throws std::invalid_argument for negative n
    long long Factorial(int n) const {
        if (n < 0)
            throw std::invalid_argument("Factorial of negative number");
        long long result = 1;
        for (int i = 2; i <= n; ++i) result *= i;
        return result;
    }
};

}  // namespace lab
