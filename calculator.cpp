#include "calculator.h"
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int Calculator::add(int a, int b) { return a + b; }
int Calculator::subtract(int a, int b) { return a - b; }
int Calculator::multiply(int a, int b) { return a * b; }

double Calculator::divide(int a, int b) {
    if (b == 0) throw std::runtime_error("Division by zero!");
    return static_cast<double>(a) / b;
}

int Calculator::factorial(int n) {
    if (n < 0) throw std::runtime_error("Negative factorial!");
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int Calculator::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int Calculator::lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int Calculator::random(int min, int max) {
    static bool seeded = false;
    if (!seeded) {
        std::srand(std::time(nullptr));
        seeded = true;
    }
    return min + (std::rand() % (max - min + 1));
}