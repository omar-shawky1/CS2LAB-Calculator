#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <stdexcept>

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return a / b;
}

int Calculator::factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers");
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int Calculator::gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Calculator::lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs(a * b) / gcd(a, b);
}

int Calculator::generateRandom(int min, int max) {
    if (min > max) {
        std::swap(min, max);
    }
    static bool initialized = false;
    if (!initialized) {
        std::srand(std::time(0));
        initialized = true;
    }
    return min + (std::rand() % (max - min + 1));
}
