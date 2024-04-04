#ifndef RENTAAUTOS_COMPANY_H
#define RENTAAUTOS_COMPANY_H

#include <string>
#include <vector>
#include "Car.h"
using namespace std;

class Company {
private:
    string nombre;
    int tamano;
    double efectivo;
    vector<Car *> autos;
public:
    Company(string nombre, int tamano);
    string getNombre() const;
    int getTamano() const;
    double getEfectivo() const;
    vector<Car *> getAutos() const;
    void setNombre(const string &nombre);
    void setTamano(int tamano);
    void setEfectivo(double efectivo);
    void comprarAuto(Car *auto1);
    void darDeBajaAuto(string placa);
   bool rentarAuto(string placa);
    bool recibirAuto(string placa);
    void mostrarAutos();
    void mostrarAutosMantenimiento();
    void mandarAutoMantenimiento(string placa);
    void sacarAutoMantenimiento(string placa);
    void mostrarAutosRentados();
    void sortCars();
};

#endif //RENTAAUTOS_COMPANY_H
