#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string placa, string marca, string modelo, double precioDiarioRenta)
        : placa(placa), marca(marca), modelo(modelo), precioDiarioRenta(precioDiarioRenta), kilometros(0), conteoMantenimiento(0), estaRentado(false) {}

Car::~Car() {}

string Car::getPlaca() const {
    return placa;
}

string Car::getMarca() const {
    return marca;
}

string Car::getModelo() const {
    return modelo;
}

int Car::getKilometros() const {
    return kilometros;
}

int Car::getConteoMantenimiento() const {
    return conteoMantenimiento;
}

double Car::getPrecioDiarioRenta() const {
    return precioDiarioRenta;
}

bool Car::getEstaRentado() const {
    return estaRentado;
}

void Car::setPlaca(const string &placa) {
    this->placa = placa;
}

void Car::setMarca(const string &marca) {
    this->marca = marca;
}

void Car::setModelo(const string &modelo) {
    this->modelo = modelo;
}

void Car::setKilometros(int kilometros) {
    this->kilometros = kilometros;
}

void Car::setConteoMantenimiento(int conteoMantenimiento) {
    this->conteoMantenimiento = conteoMantenimiento;
}

void Car::setPrecioDiarioRenta(double precioDiarioRenta) {
    this->precioDiarioRenta = precioDiarioRenta;
}

void Car::setEstaRentado(bool estaRentado) {
    this->estaRentado = estaRentado;
}

void Car::imprimirDetallesAuto() const {
    cout << "Placa: " << placa << "\nMarca: " << marca << "\nModelo: " << modelo << "\nKilómetros: " << kilometros
              << "\nConteo de Mantenimiento: " << conteoMantenimiento << "\nPrecio Diario de Renta: "
              << precioDiarioRenta << "\nEstá Rentado: " << (estaRentado ? "Sí" : "No") << endl;
}

bool Car::necesitaMantenimiento() const {
    return kilometros >= 10000;
}

bool Car::puedeSerRentado() const {
    return !estaRentado && !necesitaMantenimiento() && conteoMantenimiento <= 10;
}

bool Car::operator<(const Car& other) const {
    return kilometros < other.kilometros;
}

bool Car::operator>(const Car& other) const {
    return kilometros > other.kilometros;
}

bool Car::operator==(const Car& other) const {
    return kilometros == other.kilometros;
}