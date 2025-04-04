//
// Created by pc on 4/4/2025.
//

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

    int factorial(int n);
    int gcd(int a, int b);
    int lcm(int a, int b);
    int generateRandom(int min, int max);
};



#endif //CALCULATOR_H
