#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // Basic operations
    static int add(int a, int b);
    static int subtract(int a, int b);
    static int multiply(int a, int b);
    static double divide(int a, int b);
    
    // Advanced operations
    static int factorial(int n);
    static int gcd(int a, int b);
    static int lcm(int a, int b);
    static int random(int min, int max);
};

#endif // CALCULATOR_H