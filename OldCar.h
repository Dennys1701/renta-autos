#ifndef RENTAAUTOS_OLDCAR_H
#define RENTAAUTOS_OLDCAR_H

#include <string>
#include "Car.h"
using namespace std;

class OldCar : public Car {
private:
    int anioDeFabricacion;
public:
    OldCar(string placa, string marca, string modelo, double precioDiarioRenta, int anioDeFabricacion);
    void imprimirDetallesAuto() const override;
    int getAnioDeFabricacion() const;
    void setAnioDeFabricacion(int anioDeFabricacion);
};

#endif //RENTAAUTOS_OLDCAR_H