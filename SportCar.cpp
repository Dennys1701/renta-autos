#include <iostream>
#include "SportCar.h"

using namespace std;

SportCar::SportCar(string placa, string marca, string modelo, double precioDiarioRenta, double velocidadMaxima)
        : Car(placa, marca, modelo, precioDiarioRenta), velocidadMaxima(velocidadMaxima) {}

void SportCar::imprimirDetallesAuto() const {
    cout << "Tipo de auto: Deportivo\n";
    cout << "Velocidad máxima: " << velocidadMaxima << " km/h\n";
    Car::imprimirDetallesAuto();
}

double SportCar::getVelocidadMaxima() const {
    return velocidadMaxima;
}

void SportCar::setVelocidadMaxima(double velocidadMaxima) {
    this->velocidadMaxima = velocidadMaxima;
}