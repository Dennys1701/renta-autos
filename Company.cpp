#include "Company.h"
#include <algorithm>
#include <iostream>

using namespace std;

Company::Company(string nombre, int tamano) : nombre(nombre), tamano(tamano), efectivo(0.0) {}

string Company::getNombre() const {
    return nombre;
}

int Company::getTamano() const {
    return tamano;
}

double Company::getEfectivo() const {
    return efectivo;
}

vector<Car *> Company::getAutos() const {
    return autos;
}

void Company::setNombre(const string &nombre) {
    this->nombre = nombre;
}

void Company::setTamano(int tamano) {
    this->tamano = tamano;
}

void Company::setEfectivo(double efectivo) {
    this->efectivo = efectivo;
}

void Company::comprarAuto(Car *auto1) {
    if (autos.size() < tamano) {
        autos.push_back(auto1);
        efectivo -= auto1->getPrecioDiarioRenta();
    }
}

void Company::darDeBajaAuto(string placa) {
    autos.erase(remove_if(autos.begin(), autos.end(), [&](Car* car){ return car->getPlaca() == placa; }), autos.end());
}

bool Company::rentarAuto(string placa) {
    auto it = find_if(autos.begin(), autos.end(), [&](Car* auto1) {
        return auto1->getPlaca() == placa && auto1->puedeSerRentado();
    });

    if (it != autos.end()) {
        (*it)->setEstaRentado(true);
        efectivo += (*it)->getPrecioDiarioRenta();
        return true;
    } else {
        return false;
    }
}

bool Company::recibirAuto(string placa) {
    auto it = find_if(autos.begin(), autos.end(), [&](Car* auto1) {
        return auto1->getPlaca() == placa && auto1->getEstaRentado();
    });

    if (it != autos.end()) {
        (*it)->setEstaRentado(false);
        return true;
    } else {
        return false;
    }
}

void Company::mostrarAutos() {
    sortCars();
    for (Car *aut: autos) {
        aut->imprimirDetallesAuto();
        cout << "\n";
    }
}

void Company::mostrarAutosMantenimiento() {
    sortCars();
    for (Car *aut: autos) {
        if (aut->necesitaMantenimiento()) {
            aut->imprimirDetallesAuto();
            cout << "\n";
        }
    }
}

void Company::mandarAutoMantenimiento(string placa) {
    sortCars();
    for (Car *aut: autos) {
        if (aut->getPlaca() == placa && aut->necesitaMantenimiento()) {
            aut->setConteoMantenimiento(aut->getConteoMantenimiento() + 1);
            aut->setKilometros(0);
            break;
        }
    }
}

void Company::sacarAutoMantenimiento(string placa) {
    for (Car *aut: autos) {
        if (aut->getPlaca() == placa && aut->necesitaMantenimiento()) {
            aut->setKilometros(0);
            break;
        }
    }
}

void Company::mostrarAutosRentados() {
    sortCars();
    for (Car *aut: autos) {
        if (aut->getEstaRentado()) {
            aut->imprimirDetallesAuto();
            cout << "\n";
        }
    }
}

void Company::sortCars() {
    for (int i = 0; i < autos.size(); i++) {
        for (int j = 0; j < autos.size() - 1; j++) {
            if (*autos[j] < *autos[j + 1]) {
                swap(autos[j], autos[j + 1]);
            }
        }
    }
}