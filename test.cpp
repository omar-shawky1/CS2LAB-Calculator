#include <iostream>
#include "calculator.h"

using namespace std;

void testBasicOperations(Calculator& calc)
{
    cout << "--- Basic Operations ---\n";
    cout << "5 + 4 = " << calc.add(5, 4) << "\n";
    cout << "9 - 7 = " << calc.subtract(9, 7) << "\n";
    cout << "10 * 3 = " << calc.multiply(10, 3) << "\n";

    cout << "6 / 3 = " << calc.divide(6, 3) << "\n";

    cout << "2 / 0 = ";
    double result = calc.divide(2, 0);
    cout << result << "\n";
}

void testAdvancedOperations(Calculator& calc)
{
    cout << "\n--- Advanced Operations ---\n";
    cout << "Factorial of 14 = " << calc.factorial(14) << "\n";
    cout << "Factorial of -2 = " << calc.factorial(-2) << "\n";
    cout << "GCD of 48 and 18 = " << calc.gcd(48, 18) << "\n";
    cout << "LCM of 21 and 6 = " << calc.lcm(21, 6) << "\n";
}

void testRandomNumber(Calculator& calc)
{
    cout << "\n--- Random Number Generation ---\n";
    cout << "Random numbers between 1 and 100: ";
    for (int i = 0; i < 3; ++i)
    {
        cout << calc.generateRandom(1, 100);
        if (i < 2) cout << ", ";
    }
    cout << "\n";

    cout << "Random number between 50 and 10: " << calc.generateRandom(50, 10) << "\n";
}

int main()
{
    Calculator calc;

    testBasicOperations(calc);
    testAdvancedOperations(calc);
    testRandomNumber(calc);

    cout << "\nAll tests completed!\n";
    return 0;
}
