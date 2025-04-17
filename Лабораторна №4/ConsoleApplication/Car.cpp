#include "Car.h"

using namespace std;

Car::Car(string brand, string model, string engineType, int horsepower)
    : brand(brand), model(model), engineType(engineType), horsepower(horsepower) {}

void Car::DisplayInfo() {
    cout << "Марка: " << brand << ", Модель: " << model
              << ", Двигун: " << engineType << ", Потужність: "
              << horsepower << " к.с." << endl;
}

void Car::StartEngine() {
    cout << brand << " " << model << ": двигун запускається..." << endl;
}

Audi::Audi(string model, string engineType, int horsepower)
    : Car("Audi", model, engineType, horsepower) {}

void Audi::DisplayInfo() {
    cout << "Audi " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с." << endl;
}

void Audi::StartEngine() {
    cout << "Audi " << model << ": двигун гарчить!" << endl;
}

BMW::BMW(string model, string engineType, int horsepower)
    : Car("BMW", model, engineType, horsepower) {}

void BMW::DisplayInfo() {
    cout << "BMW " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с." << endl;
}

void BMW::StartEngine() {
    cout << "BMW " << model << ": двигун м'яко працює!" << endl;
}

Mercedes::Mercedes(string model, string engineType, int horsepower, string luxuryPackage)
    : Car("Mercedes", model, engineType, horsepower), luxuryPackage(luxuryPackage) {}

void Mercedes::DisplayInfo() {
    cout << "Mercedes " << model << " з двигуном " << engineType
              << ", потужністю " << horsepower << " к.с., та пакетом розкоші: "
              << luxuryPackage << "." << endl;
}

void Mercedes::StartEngine() {
    cout << "Mercedes " << model << ": двигун плавно запускається..." << endl;
}

void Mercedes::SetLuxuryPackage(string package) {
    luxuryPackage = package;
}

Volkswagen::Volkswagen(string model, string engineType, int horsepower, bool isElectric)
    : Car("Volkswagen", model, engineType, horsepower), isElectric(isElectric) {}

void Volkswagen::DisplayInfo() {
    cout << "Volkswagen " << model << " з двигуном " << engineType
              << " і потужністю " << horsepower << " к.с. "
              << (isElectric ? "Це електричний автомобіль." : "Це не електричний автомобіль.")
              << endl;
}

void Volkswagen::StartEngine() {
    cout << "Volkswagen " << model
              << ": двигун запускається..." << endl;
}