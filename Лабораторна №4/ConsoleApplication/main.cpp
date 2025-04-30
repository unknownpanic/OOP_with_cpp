#include "Car.h"

int main() {
    Car* myAudi = new Audi("RS7", "V8", 591);
    Car* myBMW = new BMW("M3 Competition", "Inline-6", 503);
    Car* myMercedes = new Mercedes("S-Class", "V12", 621, "Преміум");
    Car* myVolkswagen = new Volkswagen("ID.4", "Електричний", 204, true);

    myAudi->DisplayInfo();
    myAudi->StartEngine();

    myBMW->DisplayInfo();
    myBMW->StartEngine();

    myMercedes->DisplayInfo();
    myMercedes->StartEngine();

    myVolkswagen->DisplayInfo();
    myVolkswagen->StartEngine();

    delete myAudi;
    myAudi = nullptr;

    delete myBMW;
    myBMW = nullptr;

    delete myMercedes;
    myMercedes = nullptr;

    delete myVolkswagen;
    myVolkswagen = nullptr;

    if (myAudi) {
        myAudi->StartEngine();
    } else {
        std::cout << "Помилка: спроба виклику методу для знищеного об'єкта Audi." << std::endl;
    }

    if (myBMW) {
        myBMW->StartEngine();
    } else {
        std::cout << "Помилка: спроба виклику методу для знищеного об'єкта BMW." << std::endl;
    }

    if (myMercedes) {
        myMercedes->StartEngine();
    } else {
        std::cout << "Помилка: спроба виклику методу для знищеного об'єкта Mercedes." << std::endl;
    }

    if (myVolkswagen) {
        myVolkswagen->StartEngine();
    } else {
        std::cout << "Помилка: спроба виклику методу для знищеного об'єкта Volkswagen." << std::endl;
    }

    return 0;

}
