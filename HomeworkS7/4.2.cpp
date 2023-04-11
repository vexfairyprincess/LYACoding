/*Escribir un programa que solicite al usuario introducir
dos números. Si el primer número introducido es ma-
yor que el segundo número, el programa debe impri-
mir el mensaje El primer número es el mayor,
en caso contrario el programa debe imprimir el men-
saje El primer número es el más pequeño.
Considerar el caso de que ambos números sean igua-
les e imprimir el correspondiente mensaje.*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Introduzca el primer número: ";
    cin >> x;
    cout << "Introduzca el segundo número: ";
    cin >> y;

    if (x > y)
    {
        cout << "El primer número es el mayor" << endl;
    }
    else if (y > x)
    {
        cout << "El segundo número es el mayor" << endl;
    }
    else
    {
        cout << "Los dos números son iguales" << endl;
    }

    return 0;
}
