#include <iostream>
#include "calculator.h"

void test_operations() {
    std::cout << "Testing Calculator:\n";
    std::cout << "5 + 3 = " << Calculator::add(5, 3) << "\n";
    std::cout << "5 - 3 = " << Calculator::subtract(5, 3) << "\n";
    std::cout << "5 * 3 = " << Calculator::multiply(5, 3) << "\n";
    
    try {
        std::cout << "5 / 3 = " << Calculator::divide(5, 3) << "\n";
        std::cout << "5 / 0 = " << Calculator::divide(5, 0) << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    
    std::cout << "5! = " << Calculator::factorial(5) << "\n";
    std::cout << "GCD(15,25) = " << Calculator::gcd(15, 25) << "\n";
    std::cout << "LCM(15,25) = " << Calculator::lcm(15, 25) << "\n";
    std::cout << "Random(1,100) = " << Calculator::random(1, 100) << "\n";
}

int main() {
    test_operations();
    return 0;
}
