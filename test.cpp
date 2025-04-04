#include <iostream>
#include "calculator.h"

void testBasicOperations(Calculator& calc) {
    std::cout << "--- Testing Basic Operations ---\n";
    std::cout << "5 + 3 = " << calc.add(5, 3) << "\n";
    std::cout << "5 - 3 = " << calc.subtract(5, 3) << "\n";
    std::cout << "5 * 3 = " << calc.multiply(5, 3) << "\n";

    try {
        std::cout << "5 / 3 = " << calc.divide(5, 3) << "\n";
        std::cout << "5 / 0 = "; // This should throw
        std::cout << calc.divide(5, 0) << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << "\n";
    }
}

void testAdvancedOperations(Calculator& calc) {
    std::cout << "\n--- Testing Advanced Operations ---\n";
    std::cout << "Factorial of 5 = " << calc.factorial(5) << "\n";

    try {
        std::cout << "Factorial of -2 = "; // This should throw
        std::cout << calc.factorial(-2) << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    std::cout << "GCD of 48 and 18 = " << calc.gcd(48, 18) << "\n";
    std::cout << "LCM of 21 and 6 = " << calc.lcm(21, 6) << "\n";
}

void testRandomNumber(Calculator& calc) {
    std::cout << "\n--- Testing Random Number Generation ---\n";
    std::cout << "Random number between 1 and 100: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << calc.generateRandom(1, 100);
        if (i < 2) std::cout << ", ";
    }
    std::cout << "\n";

    std::cout << "Random number between 50 and 10 (should auto-correct range): ";
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