#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand, engine, color, interior, transmission;

public:
    void setBrand(const string& b) { brand = b; }
    void setEngine(const string& e) { engine = e; }
    void setColor(const string& c) { color = c; }
    void setInterior(const string& i) { interior = i; }
    void setTransmission(const string& t) { transmission = t; }

    void display() const {
        cout << "Автомобіль:\nБренд: " << brand << "\nДвигун: " << engine
                  << "\nКолір: " << color << "\nСалон: " << interior
                  << "\nКоробка передач: " << transmission << "\n";
    }
};

class CarBuilder {
protected:
    Car car;

public:
    virtual void buildBrand() = 0;
    virtual void buildEngine() = 0;
    virtual void buildColor() = 0;
    virtual void buildInterior() = 0;
    virtual void buildTransmission() = 0;
    Car getCar() {
        return car;
    }
};

class BMWBuilder : public CarBuilder {
public:
    void buildBrand() override { car.setBrand("BMW"); }
    void buildEngine() override { car.setEngine("3.0L V6 Turbo"); }
    void buildColor() override { car.setColor("Чорний"); }
    void buildInterior() override { car.setInterior("Шкіряний"); }
    void buildTransmission() override { car.setTransmission("Автоматична"); }
};

class CarDirector {
private:
    CarBuilder* builder;

public:
    void setBuilder(CarBuilder* b) { builder = b; }
    Car constructCar() {
        builder->buildBrand();
        builder->buildEngine();
        builder->buildColor();
        builder->buildInterior();
        builder->buildTransmission();
        return builder->getCar();
    }
};

int main() {
    CarDirector director;
    BMWBuilder bmwBuilder;
    director.setBuilder(&bmwBuilder);
    Car bmwCar = director.constructCar();
    bmwCar.display();

    return 0;
}