#include "SolverMethods.h"
#include <iostream>
#include <cmath>
#include <functional>

BisectionMethod::BisectionMethod(double start, double end, double precision)
    : a(start), b(end), epsilon(precision) {}

double BisectionMethod::solve() {
    auto function = [](double x) -> double {
        return x - 2 + sin(1 / x);
    };

    if (function(a) * function(b) >= 0) {
        std::cerr << "Error: No root in the given interval.\n";
        return NAN;
    }

    double c;
    while ((b - a) / 2 > epsilon) {
        c = (a + b) / 2;
        if (function(c) == 0.0) {
            break;
        } else if (function(a) * function(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a + b) / 2;
}

NewtonMethod::NewtonMethod(double initialGuess, double precision)
    : x0(initialGuess), epsilon(precision) {}

double NewtonMethod::solve() {
    auto function = [](double x) -> double {
        return x - 2 + sin(1 / x);
    };

    auto derivative = [](double x) -> double {
        return 1 - cos(1 / x) / (x * x);
    };

    double x1;
    while (true) {
        double derivValue = derivative(x0);
        if (fabs(derivValue) < 1e-12) {
            std::cerr << "Error: Derivative too small.\n";
            return NAN;
        }

        x1 = x0 - function(x0) / derivValue;

        if (fabs(x1 - x0) < epsilon) {
            break;
        }

        x0 = x1;
    }
    return x1;
}