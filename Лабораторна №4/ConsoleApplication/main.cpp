#include "Car.h"

int main() {
    Audi myAudi("RS7", "V8", 591);
    BMW myBMW("M3 Competition", "Inline-6", 503);
    Mercedes myMercedes("S-Class", "V12", 621, "Преміум");
    Volkswagen myVolkswagen("ID.4", "Електричний", 204, true);

    myAudi.DisplayInfo();
    myAudi.StartEngine();

    myBMW.DisplayInfo();
    myBMW.StartEngine();

    myMercedes.DisplayInfo();
    myMercedes.StartEngine();
    myMercedes.SetLuxuryPackage("Ексклюзив");
    myMercedes.DisplayInfo();

    myVolkswagen.DisplayInfo();
    myVolkswagen.StartEngine();

    return 0;
}