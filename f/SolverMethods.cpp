#include "SolverMethods.h"

// Реалізація функції для методу дихотомії
double BisectionMethod::function(double x) {
    return x - 2 + sin(1 / x);
}

BisectionMethod::BisectionMethod(double start, double end, double precision)
    : a(start), b(end), epsilon(precision) {}

double BisectionMethod::solve() {
    if (function(a) * function(b) >= 0) {
        std::cerr << "Error: No root in the given interval.\n";
        return NAN;
    }

    double c;
    while ((b - a) / 2 > epsilon) {
        c = (a + b) / 2;
        if (function(c) == 0.0)
            break;
        else if (function(a) * function(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}

// Реалізація функцій для методу Ньютона
double NewtonMethod::function(double x) {
    return x - 2 + sin(1 / x);
}

double NewtonMethod::derivative(double x) {
    return 1 - cos(1 / x) / (x * x);
}

NewtonMethod::NewtonMethod(double initialGuess, double precision)
    : x0(initialGuess), epsilon(precision) {}

double NewtonMethod::solve() {
    double x1;
    while (true) {
        double deriv = derivative(x0);
        if (fabs(deriv) < 1e-12) {
            std::cerr << "Error: Derivative too small.\n";
            return NAN;
        }

        x1 = x0 - function(x0) / deriv;

        if (fabs(x1 - x0) < epsilon)
            break;

        x0 = x1;
    }
    return x1;
}