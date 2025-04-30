#include "Car.h"

Car::Car(std::string brand, std::string model, int horsepower)
    : brand(brand), model(model), horsepower(horsepower) {
    std::cout << "Конструктор Car\n";
}

Car::~Car() {
    std::cout << "Деструктор Car\n";
}

void Car::DisplayInfo() {
    std::cout << "Марка: " << brand << ", Модель: " << model
              << ", Потужність: " << horsepower << " к.с.\n";
}

ElectricFeatures::ElectricFeatures(int batteryCapacity)
    : batteryCapacity(batteryCapacity) {
    std::cout << "Конструктор ElectricFeatures\n";
}

ElectricFeatures::~ElectricFeatures() {
    std::cout << "Деструктор ElectricFeatures\n";
}

void ElectricFeatures::DisplayBatteryInfo() {
    std::cout << "Ємність батареї: " << batteryCapacity << " кВт·год\n";
}

HybridCar::HybridCar(std::string brand, std::string model, int horsepower, int batteryCapacity)
    : Car(brand, model, horsepower), ElectricFeatures(batteryCapacity) {
    std::cout << "Конструктор HybridCar\n";
}

HybridCar::~HybridCar() {
    std::cout << "Деструктор HybridCar\n";
}

void HybridCar::DisplayInfo() {
    Car::DisplayInfo();
    ElectricFeatures::DisplayBatteryInfo();
}

LuxuryCar::LuxuryCar(std::string brand, std::string model, int horsepower)
    : Car(brand, model, horsepower) {
    std::cout << "Конструктор LuxuryCar\n";
}

LuxuryCar::~LuxuryCar() {
    std::cout << "Деструктор LuxuryCar\n";
}

void LuxuryCar::DisplayLuxuryFeatures() {
    std::cout << "Цей автомобіль має розкішні функції.\n";
}

ElectricCar::ElectricCar(std::string brand, std::string model, int horsepower)
    : Car(brand, model, horsepower) {
    std::cout << "Конструктор ElectricCar\n";
}

ElectricCar::~ElectricCar() {
    std::cout << "Деструктор ElectricCar\n";
}

void ElectricCar::DisplayElectricFeatures() {
    std::cout << "Цей автомобіль має електричний двигун.\n";
}

HybridLuxuryCar::HybridLuxuryCar(std::string brand, std::string model, int horsepower)
    : Car(brand, model, horsepower), LuxuryCar(brand, model, horsepower),
      ElectricCar(brand, model, horsepower) {
    std::cout << "Конструктор HybridLuxuryCar\n";
}

HybridLuxuryCar::~HybridLuxuryCar() {
    std::cout << "Деструктор HybridLuxuryCar\n";
}

void HybridLuxuryCar::DisplayInfo() {
    DisplayLuxuryFeatures();
    DisplayElectricFeatures();
}