// Dados tres números deducir cuál es el central.
#include <iostream>
using namespace std;

int main()
{
    /* Definicion de variables */
    float x, y, z;
    cout << "Introduzca el primer número: ";
    cin >> x;
    cout << "Introduzca el segundo número: ";
    cin >> y;
    cout << "Introduzca el tercer número: ";
    cin >> z;
    int grt, less;
    if (x > y && x > z)
    {
        grt = x;
    }
    else if (y > x && y > z)
    {
        grt = y;
    }
    else
    {
        grt = z;
    }
    if (x < y && x < z)
    {
        less = x;
    }
    else if (y < x && y < z)
    {
        less = y;
    }
    else
    {
        less = z;
    }

    // Encontrar numero central
    int centrl;
    centrl = x + y + z - grt - less;
    cout << "El número central es: " << centrl << endl;
    return 0;
}
