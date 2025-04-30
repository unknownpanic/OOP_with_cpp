#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string brand;
    string model;
    int horsepower;

public:
    Car(string brand, string model, int horsepower);
    virtual ~Car();

    virtual void DisplayInfo();
};

class ElectricFeatures {
protected:
    int batteryCapacity;

public:
    ElectricFeatures(int batteryCapacity);
    virtual ~ElectricFeatures();

    void DisplayBatteryInfo();
};

class HybridCar : public Car, public ElectricFeatures {
public:
    HybridCar(string brand, string model, int horsepower, int batteryCapacity);
    ~HybridCar() override;

    void DisplayInfo() override;
};

class LuxuryCar : virtual public Car {
public:
    LuxuryCar(string brand, string model, int horsepower);
    ~LuxuryCar() override;

    void DisplayLuxuryFeatures();
};

class ElectricCar : virtual public Car {
public:
    ElectricCar(string brand, string model, int horsepower);
    ~ElectricCar() override;

    void DisplayElectricFeatures();
};

class HybridLuxuryCar : public LuxuryCar, public ElectricCar {
public:
    HybridLuxuryCar(string brand, string model, int horsepower);
    ~HybridLuxuryCar() override;

    void DisplayInfo() override;
};