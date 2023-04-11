/* Escribir los diferentes métodos para deducir si una
variable o expresión numérica es par.*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " es un número par." << endl;
    }
    else
    {
        cout << num << " es un número impar." << endl;
    }

    return 0;
}
