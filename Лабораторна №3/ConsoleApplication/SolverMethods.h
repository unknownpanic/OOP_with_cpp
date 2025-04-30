#include <iostream>
#include <cmath>

class BisectionMethod {
private:
    double a, b, epsilon;

public:
    BisectionMethod(double start, double end, double precision);

    double solve();
};

class NewtonMethod {
private:
    double x0, epsilon;

public:
    NewtonMethod(double initialGuess, double precision);

    double solve();
};