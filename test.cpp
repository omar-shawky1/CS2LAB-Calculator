#include <iostream>
#include "calculator.h"

void testBasicOperations(Calculator& calc) {
    std::cout << "--- Basic Operations ---\n";
    std::cout << "5 + 4 = " << calc.add(5, 4) << "\n";
    std::cout << "9 - 7 = " << calc.subtract(9, 7) << "\n";
    std::cout << "10 * 3 = " << calc.multiply(10, 3) << "\n";

    try {
        std::cout << "6 / 3 = " << calc.divide(6, 3) << "\n";
        std::cout << "2 / 0 = ";
        std::cout << calc.divide(5, 0) << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << "\n";
    }
}

void testAdvancedOperations(Calculator& calc) {
    std::cout << "\n--- Advanced Operations ---\n";
    std::cout << "Factorial of 14 = " << calc.factorial(14) << "\n";

    try {
        std::cout << "Factorial of -2 = ";
        std::cout << calc.factorial(-2) << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    std::cout << "GCD of 48 and 18 = " << calc.gcd(48, 18) << "\n";
    std::cout << "LCM of 21 and 6 = " << calc.lcm(21, 6) << "\n";
}

void testRandomNumber(Calculator& calc) {
    std::cout << "\n--- Random Number Generation ---\n";
    std::cout << "Random number between 1 and 100: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << calc.generateRandom(1, 100);
        if (i < 2) std::cout << ", ";
    }
    std::cout << "\n";

    std::cout << "Random number between 50 and 10: ";
    std::cout << calc.generateRandom(50, 10) << "\n";
}

int main() {
    Calculator calc;

    testBasicOperations(calc);
    testAdvancedOperations(calc);
    testRandomNumber(calc);

    std::cout << "\nAll tests completed!\n";
    return 0;
}