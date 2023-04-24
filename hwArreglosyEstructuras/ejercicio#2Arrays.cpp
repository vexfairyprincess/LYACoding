/*Declare un arreglo según la tabla y asigne los valores propuestos;
imprima en pantalla los valores almacenados utilizando las funciones de E/S y
formato adecuado.*/
#include <iostream>

using namespace std;

int main(){
    double table[6] = {0, 95.75, 0, 87.91, 0, 85.72};

    cout << "Valores almacenados en la tabla: ";
    for (int i = 0; i < 6; i++){
        cout << table[i] << " ";
    }
    cout << endl;

    return 0;
}
