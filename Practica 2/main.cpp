#include <iostream>
#include <string>
#include "Mamifero.h"
#include "Felino.h"
#include "GatoDomestico.h"
using namespace std;

int main(){
    Felino EstrellaCirco;
    GatoDomestico Minimo;
    int opcion;
    std::string NuevoNombre;
    bool repetir = true;
    do{
        system("cls");
        cout << "MENU DE OPCIONES" << endl;
        cout << "1. Declarar un objeto llamado Minino de tipo GatoDoméstico y otro llamado EstrellaCirco de tipo Felino." << endl;
        cout << "2. Imprimir la dieta de Minino y de EstrellaCirco." << endl;
        cout << "3. Imprimir el año y lugar de nacimiento de Minino y de EstrellaCirco." << endl;
        cout << "4. Cambiar el nombre del dueño de Minino." << endl;
        cout << "5. Imprimir la raza de Minino y de EstrellaCirco." << endl;
        cout << "6. Cambiar el nombre del circo en el que actual EstrellaCirco." << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion){
            case '1':
                cout << "1. Declarar un objeto llamado Minino de tipo GatoDoméstico y otro llamado EstrellaCirco de tipo Felino." << endl;
                Felino EstrellaCirco;
                GatoDomestico Minimo;
                system("pause>nul");
                break;
            case 2:
                cout << "2. Imprimir la dieta de Minino y de EstrellaCirco." << endl;
                EstrellaCirco.set_Dieta("Mariscos, Avena y Leche");
                Minimo.set_Dieta("Pollo, Agua y Lechuga");
                EstrellaCirco.print();
                Minimo.print();
                system("pause>nul");
                break;
            case 3:
                cout << "3. Imprimir el año y lugar de nacimiento de Minino y de EstrellaCirco." << endl;
                EstrellaCirco.set_anio('2024');
                EstrellaCirco.set_LugarNacimiento("Yacatan Mexico");
                Minimo.set_anio('2024');
                Minimo.set_LugarNacimiento("Yacatan Mexico");
                EstrellaCirco.print();
                Minimo.print();
                system("pause>nul");
                break;
            case 4:
                cout << "4. Cambiar el nombre del dueño de Minino." << endl;
                Minimo.set_Nombre("Roberto Gonzales");
                Minimo.print();
                cout << "Cambia el Nombre" << endl;
                cin >> NuevoNombre;
                cout << "Este es el Nuevo Nombre del Dueño de Minimo" << NuevoNombre << endl;
                system("pause>nul");
                break;
            case 5:
                cout << "5. Imprimir la raza de Minino y de EstrellaCirco." << endl;
                Minimo.set_Raza("Carnivoro");
                EstrellaCirco.set_Raza("Primate");
                EstrellaCirco.print();
                Minimo.print();
                system("pause>nul");
                break;
            case 6:
                cout << "6. Cambiar el nombre del circo en el que actual EstrellaCirco." << endl;
                EstrellaCirco.set_Nombre("Gran Circo");
                EstrellaCirco.print();
                cout << "Cambia el Nombre del Circo" << endl;
                cin >> NuevoNombre;
                cout << "Este es el Nuevo Nombre del Circo de Estrella Circo" << NuevoNombre << endl;
                system("pause>nul");
                break;
            case 0:
                repetir = false;
                break;
            }
        }while (repetir);
        return 0;
}
