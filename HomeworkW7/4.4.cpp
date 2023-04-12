/* Calcular la raíz cuadrada de un número y escribir su
resultado. Considerando el caso en que el número sea
negativo. */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Pedimos al usuario que introduzca un número
    double x;
    cout << "Introduzca un número: ";
    cin >> x;

    // Calculamos la raíz cuadrada y verificamos si el número es negativo
    if (x >= 0)
    {
        double raiz = sqrt(x);
        cout << "La raíz cuadrada de " << x << " es: " << raiz << endl;
    }
    else
    {
        cout << "No es posible calcular la raíz cuadrada de un número negativo." << endl;
    }

    return 0;
}
