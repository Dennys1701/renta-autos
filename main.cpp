#include <iostream>
#include "Company.h"
#include "SportCar.h"
#include "OldCar.h"

using namespace std;

int main() {
    Company myCompany("My Company", 5);

    int opcion = 0;
    while (opcion != 11) {
        system("cls");
        cout << "1. Mostrar todos los autos\n";
        cout << "2. Rentar un auto\n";
        cout << "3. Devolver un auto\n";
        cout << "4. Mostrar autos rentados\n";
        cout << "5. Comprar un auto deportivo\n";
        cout << "6. Comprar un auto antiguo\n";
        cout << "7. Mandar auto a mantenimiento\n";
        cout << "8. Sacar auto de mantenimiento\n";
        cout << "9. Mostrar autos en mantenimiento\n";
        cout << "10. Mostrar Informacion de la Compañia\n";
        cout << "11. Salir\n\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        system("cls");
        switch (opcion) {
            case 1:
                cout << "Todos los autos:" << endl;
                myCompany.mostrarAutos();
                cout << "\n";
                break;
            case 2: {
                cout << "Ingrese la placa del auto que desea rentar: ";
                string placa;
                cin >> placa;
                if(myCompany.rentarAuto(placa)){
                    cout << "Auto rentado exitosamente.\n" << endl;
                }else{
                    cout << "Auto no existe.\n" << endl;
                }

                break;
            }
            case 3: {
                cout << "Ingrese la placa del auto que desea devolver: ";
                string placa;
                cin >> placa;
                if(myCompany.recibirAuto(placa)){
                    cout << "Auto devuelto exitosamente.\n" << endl;
                }else{
                    cout << "Auto no existe o no esta rentado.\n" << endl;
                }
                break;
            }
            case 4:
                cout << "Autos rentados:" << endl;
                myCompany.mostrarAutosRentados();
                
                break;
            case 5: {
                string placa, marca, modelo;
                double precio, velocidadMaxima;
                cout << "Ingrese la placa del auto deportivo: ";
                cin >> placa;
                cout << "Ingrese la marca del auto deportivo: ";
                cin >> marca;
                cout << "Ingrese el modelo del auto deportivo: ";
                cin >> modelo;
                cout << "Ingrese el precio diario de renta del auto deportivo: ";
                cin >> precio;
                cout << "Ingrese la velocidad máxima del auto deportivo: ";
                cin >> velocidadMaxima;
                Car* car = new SportCar(placa, marca, modelo, precio, velocidadMaxima);
                myCompany.comprarAuto(car);
                
                cout << "Auto deportivo comprado exitosamente.\n" << endl;
                break;
            }
            case 6: {
                string placa, marca, modelo;
                double precio;
                int anio;
                cout << "Ingrese la placa del auto antiguo: ";
                cin >> placa;
                cout << "Ingrese la marca del auto antiguo: ";
                cin >> marca;
                cout << "Ingrese el modelo del auto antiguo: ";
                cin >> modelo;
                cout << "Ingrese el precio diario de renta del auto antiguo: ";
                cin >> precio;
                cout << "Ingrese el año de fabricación del auto antiguo: ";
                cin >> anio;
                Car* car = new OldCar(placa, marca, modelo, precio, anio);
                myCompany.comprarAuto(car);
                
                cout << "Auto antiguo comprado exitosamente.\n" << endl;
                break;
            }
            case 7: {
                cout << "Ingrese la placa del auto que desea mandar a mantenimiento: ";
                string placa;
                cin >> placa;
                myCompany.mandarAutoMantenimiento(placa);
                
                cout << "Auto enviado a mantenimiento exitosamente.\n" << endl;
                break;
            }
            case 8: {
                cout << "Ingrese la placa del auto que desea sacar de mantenimiento: ";
                string placa;
                cin >> placa;
                myCompany.sacarAutoMantenimiento(placa);
                
                cout << "Auto sacado de mantenimiento exitosamente.\n" << endl;
                break;
            }
            case 9:
                cout << "Autos en mantenimiento:" << endl;
                myCompany.mostrarAutosMantenimiento();
                cout << "\n";
                break;
            case 10:
                cout <<"Nombre:"<<myCompany.getNombre()<< endl;
                cout << "\n";
                cout <<"Efectivo:"<<myCompany.getEfectivo()<< endl;
                cout << "\n";
                cout <<"Tamaño:"<<myCompany.getTamano()<< endl;
                cout << "\n";
                break;
            case 11:
                cout << "Saliendo del programa...\n" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, intente de nuevo.\n" << endl;
                break;
        }
        system("pause");
    }

    return 0;
}