/*Declare, inicialice el arreglo según la tabla y los valores propuestos;
imprima en pantalla los valores almacenados utilizando las funciones de E/S y
formato adecuado.*/
#include <iostream>

using namespace std;

void ejercicio1Array();

void ejercicio1Array(){
    char table[11] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};

    cout << "Valores almacenados en el arreglo: ";
    for (int i = 0; i < 11; i++)
    {
        cout << table[i] << " ";
    }
    cout << endl;
}
