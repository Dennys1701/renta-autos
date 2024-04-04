#include <iostream>
#include "OldCar.h"

using namespace std;

OldCar::OldCar(string placa, string marca, string modelo, double precioDiarioRenta, int anioDeFabricacion)
        : Car(placa, marca, modelo, precioDiarioRenta), anioDeFabricacion(anioDeFabricacion) {}

void OldCar::imprimirDetallesAuto() const {
    cout << "Tipo de auto: Antiguo\n";
    Car::imprimirDetallesAuto();
}

int OldCar::getAnioDeFabricacion() const {
    return anioDeFabricacion;
}

void OldCar::setAnioDeFabricacion(int anioDeFabricacion) {
    this->anioDeFabricacion = anioDeFabricacion;
}