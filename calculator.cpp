#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>

using namespace std;

double Calculator::add(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

double Calculator::divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Cannot divide by zero.\n";
        return 0;
    }
    return a / b;
}

int Calculator::factorial(int n)
{
    if (n < 0) {
        cout << "Error: Factorial of a negative number is undefined.\n";
        return -1;
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) result *= i;
    return result;
}

int Calculator::gcd(int a, int b)
{
    a = abs(a); b = abs(b);
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Calculator::lcm(int a, int b)
{
    if (!a || !b) return 0;
    return abs(a * b) / gcd(a, b);
}

int Calculator::generateRandom(int min, int max)
{
    if (min > max) swap(min, max);
    static bool initialized = false;
    if (!initialized) {
        srand(time(0));
        initialized = true;
    }
    return min + (rand() % (max - min + 1));
}
