// Dadas dos variables a y b con valores iniciales proporcionados por el usuario, realice el intercambio de valores entre las variables y muestre el resultado.
#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variables
    int a, b, inter;
    cout << "Dame un umero que definire como a: ";
    cin >> a;
    cout << "Dame un numero que definire como b: ";
    cin >> b;
    cout << "Antes del intercambio a = " << a << " y b = " << b << endl;

    //Intercambio de variable
    inter = a;
    a = b;
    b = inter;
    cout << "Variables intercambiadas a = " << a << " y b = " << b << endl;

    return 0;
}
