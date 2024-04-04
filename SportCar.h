#ifndef RENTAAUTOS_SPORTCAR_H
#define RENTAAUTOS_SPORTCAR_H

#include <string>
#include "Car.h" // Asegúrate de que este archivo exista

using namespace std;

class SportCar : public Car {
private:
    double velocidadMaxima;
public:
    SportCar(string placa, string marca, string modelo, double precioDiarioRenta, double velocidadMaxima);
    void imprimirDetallesAuto() const override;
    double getVelocidadMaxima() const;
    void setVelocidadMaxima(double velocidadMaxima);
};

#endif //RENTAAUTOS_SPORTCAR_H