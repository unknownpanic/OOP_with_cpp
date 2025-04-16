#include <iostream>
#include <cmath>

class BisectionMethod {
private:
    double a, b, epsilon;
    double function(double x);

public:
    BisectionMethod(double start, double end, double precision);

    double solve();
};

class NewtonMethod {
private:
    double x0, epsilon;
    double function(double x);
    double derivative(double x);

public:
    NewtonMethod(double initialGuess, double precision);

    double solve();
};
