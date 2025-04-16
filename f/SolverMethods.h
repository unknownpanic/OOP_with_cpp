#ifndef SOLVER_METHODS_H
#define SOLVER_METHODS_H

#include <iostream>
#include <cmath>

class BisectionMethod {
private:
    double a, b, epsilon;

    // Цільова функція
    double function(double x);

public:
    // Конструктор
    BisectionMethod(double start, double end, double precision);

    // Метод розв'язання рівняння
    double solve();
};

class NewtonMethod {
private:
    double x0, epsilon;

    // Цільова функція
    double function(double x);

    // Похідна функції
    double derivative(double x);

public:
    // Конструктор
    NewtonMethod(double initialGuess, double precision);

    // Метод розв'язання рівняння
    double solve();
};

#endif // SOLVER_METHODS_H