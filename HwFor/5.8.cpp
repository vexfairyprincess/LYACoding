/*Leer 100 números. Determinar la media de los números positivos
y la media de los números negativos.*/
#include <iostream>

using namespace std;

int main()
{
    float num;
    float sumaPos = 0;
    float sumaNeg = 0;
    float contPos = 0;
    float contNeg = 0;

    for (int i = 1; i <= 100; i++)
    {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num >= 0)
        {
            sumaPos += num;
            contPos++;
        }
        else
        {
            sumaNeg += num;
            contNeg++;
        }
    }

    if (contPos > 0)
    {
        float mediaPos = sumaPos / contPos;
        cout << "La media de los numeros positivos es: " << mediaPos << endl;
    }
    else
    {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    if (contNeg > 0)
    {
        float mediaNeg = sumaNeg / contNeg;
        cout << "La media de los numeros negativos es: " << mediaNeg << endl;
    }
    else
    {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    return 0;
}
