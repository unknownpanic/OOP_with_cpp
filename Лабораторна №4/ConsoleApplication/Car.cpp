#include "Car.h"

Car::Car(std::string brand, std::string model, std::string engineType, int horsepower)
    : brand(brand), model(model), engineType(engineType), horsepower(horsepower) {}

void Car::DisplayInfo() {
    std::cout << "Марка: " << brand << ", Модель: " << model
              << ", Двигун: " << engineType << ", Потужність: "
              << horsepower << " к.с." << std::endl;
}

void Car::StartEngine() {
    std::cout << brand << " " << model << ": двигун запускається..." << std::endl;
}

Audi::Audi(std::string model, std::string engineType, int horsepower)
    : Car("Audi", model, engineType, horsepower) {}

void Audi::DisplayInfo() {
    std::cout << "Audi " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с." << std::endl;
}

void Audi::StartEngine() {
    std::cout << "Audi " << model << ": двигун гарчить!" << std::endl;
}

BMW::BMW(std::string model, std::string engineType, int horsepower)
    : Car("BMW", model, engineType, horsepower) {}

void BMW::DisplayInfo() {
    std::cout << "BMW " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с." << std::endl;
}

void BMW::StartEngine() {
    std::cout << "BMW " << model << ": двигун м'яко працює!" << std::endl;
}

Mercedes::Mercedes(std::string model, std::string engineType, int horsepower, std::string luxuryPackage)
    : Car("Mercedes", model, engineType, horsepower), luxuryPackage(luxuryPackage) {}

void Mercedes::DisplayInfo() {
    std::cout << "Mercedes " << model << " з двигуном " << engineType
              << ", потужністю " << horsepower << " к.с., та пакетом розкоші: "
              << luxuryPackage << "." << std::endl;
}

void Mercedes::StartEngine() {
    std::cout << "Mercedes " << model << ": двигун плавно запускається..." << std::endl;
}

void Mercedes::SetLuxuryPackage(std::string package) {
    luxuryPackage = package;
}

Volkswagen::Volkswagen(std::string model, std::string engineType, int horsepower, bool isElectric)
    : Car("Volkswagen", model, engineType, horsepower), isElectric(isElectric) {}

void Volkswagen::DisplayInfo() {
    std::cout << "Volkswagen " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с. "
              << (isElectric ? "Це електричний автомобіль." : "Це не електричний автомобіль.")
              << std::endl;
}

void Volkswagen::StartEngine() {
    std::cout << "Volkswagen " << model
              << ": двигун запускається..." << std::endl;
}