#include <iostream>
#include <string>

class Car {
protected:
    std::string brand;
    std::string model;
    std::string engineType;
    int horsepower;

public:
    Car(std::string brand, std::string model, std::string engineType, int horsepower);
    virtual void DisplayInfo();
    virtual void StartEngine();
};

class Audi : public Car {
public:
    Audi(std::string model, std::string engineType, int horsepower);
    void DisplayInfo() override;
    void StartEngine() override;
};

class BMW : public Car {
public:
    BMW(std::string model, std::string engineType, int horsepower);
    void DisplayInfo() override;
    void StartEngine() override;
};

class Mercedes : public Car {
private:
    std::string luxuryPackage;
public:
    Mercedes(std::string model, std::string engineType, int horsepower, std::string luxuryPackage);
    void DisplayInfo() override;
    void StartEngine() override;
    void SetLuxuryPackage(std::string package);
};

class Volkswagen : public Car {
private:
    bool isElectric;
public:
    Volkswagen(std::string model, std::string engineType, int horsepower, bool isElectric);
    void DisplayInfo() override;
    void StartEngine() override;
};
