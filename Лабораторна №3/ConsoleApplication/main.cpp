#include "SolverMethods.h"

int main() {
    double a = 0.9, b = 2.0, epsilon = 1e-6;

    BisectionMethod bisection(a, b, epsilon);
    double rootBisection = bisection.solve();
    if (!std::isnan(rootBisection)) {
        std::cout << "Root found by Bisection Method: " << rootBisection << "\n";
    }

    double initialGuess = 1.5;
    NewtonMethod newton(initialGuess, epsilon);
    double rootNewton = newton.solve();
    if (!std::isnan(rootNewton)) {
        std::cout << "Root found by Newton's Method: " << rootNewton << "\n";
    }

    return 0;
}