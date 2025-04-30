#include "Car.h"

int main() {
    std::cout << "Множинне успадкування:\n";
    HybridCar* hybridCar = new HybridCar("Toyota", "Prius", 121, 8);
    hybridCar->DisplayInfo();
    delete hybridCar;

    std::cout << "\nРомбовидне успадкування:\n";
    HybridLuxuryCar* hybridLuxuryCar = new HybridLuxuryCar("Tesla", "Model S Plaid", 1020);
    hybridLuxuryCar->DisplayInfo();
    delete hybridLuxuryCar;

    return 0;
}