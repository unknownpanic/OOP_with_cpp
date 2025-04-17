#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string brand;
    string model;
    string engineType;
    int horsepower;

public:
    Car(string brand, string model, string engineType, int horsepower);
    virtual void DisplayInfo();
    virtual void StartEngine();
};

class Audi : public Car {
public:
    Audi(string model, string engineType, int horsepower);
    void DisplayInfo() override;
    void StartEngine() override;
};

class BMW : public Car {
public:
    BMW(string model, string engineType, int horsepower);
    void DisplayInfo() override;
    void StartEngine() override;
};

class Mercedes : public Car {
private:
    string luxuryPackage;
public:
    Mercedes(string model, string engineType, int horsepower, string luxuryPackage);
    void DisplayInfo() override;
    void StartEngine() override;
    void SetLuxuryPackage(string package);
};

class Volkswagen : public Car {
private:
    bool isElectric;
public:
    Volkswagen(string model, string engineType, int horsepower, bool isElectric);
    void DisplayInfo() override;
    void StartEngine() override;
};
