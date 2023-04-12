/*Determinar la media de una lista indefinida de números positivos,
terminados con un numero negativo*/
#include <iostream>
using namespace std;

int main()
{
    double numero, sum = 0;
    int count = 0;
    for (;;)
    {
        cout << "Introduzca un número positivo (o un número negativo para terminar): ";
        cin >> numero;

        if (numero < 0)
        {
            break;
        }
        sum += numero;
        count++;
    }

    if (count > 0)
    {
        double media = sum / count;
        cout << "La media de los números es: " << media << endl;
    }
    else
    {
        cout << "No se introdujo ningún número positivo." << endl;
    }

    return 0;
}
