#include <iostream>
using namespace std;

// prototipo de funcion
void decirDia(int dia);

// Funcion
void decirDia(int dia)
{
    switch (dia)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Lunes" << endl;
        break;
    case 3:
        cout << "Martes" << endl;
        break;
    case 4:
        cout << "Miercoles" << endl;
        break;
    case 5:
        cout << "Jueves" << endl;
        break;
    case 6:
        cout << "Viernes" << endl;
        break;
    case 7:
        cout << "Sabado" << endl;
        break;
    default:
        cout << "No se permite elegir un numero fuera de rango" <<endl;
        break;
    }
}
