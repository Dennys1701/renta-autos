#ifndef RENTAAUTOS_CAR_H
#define RENTAAUTOS_CAR_H

#include <string>
using namespace std;

class Car {
protected:
    string placa;
    string marca;
    string modelo;
    int kilometros;
    int conteoMantenimiento;
    double precioDiarioRenta;
    bool estaRentado;
public:
    Car(string placa, string marca, string modelo, double precioDiarioRenta);
    virtual ~Car();
    string getPlaca() const;
    string getMarca() const;
    string getModelo() const;
    int getKilometros() const;
    int getConteoMantenimiento() const;
    double getPrecioDiarioRenta() const;
    bool getEstaRentado() const;
    void setPlaca(const string &placa);
    void setMarca(const string &marca);
    void setModelo(const string &modelo);
    void setKilometros(int kilometros);
    void setConteoMantenimiento(int conteoMantenimiento);
    void setPrecioDiarioRenta(double precioDiarioRenta);
    void setEstaRentado(bool estaRentado);
    virtual void imprimirDetallesAuto() const;
    bool necesitaMantenimiento() const;
    bool puedeSerRentado() const;
    bool operator<(const Car& other) const;
    bool operator>(const Car& other) const;
    bool operator==(const Car& other) const;
};

#endif //RENTAAUTOS_CAR_H