/* Determinar la media de una lista de números positivos
terminada con un número no positivo después del último número válido.*/
#include <iostream>

using namespace std;
int main()
{
    float numero = 0, suma = 0, cont = 0;
    for (int i = 0; i <= cont; i++)
    {
        double media;
        suma += numero;
        media = suma / cont;
        cout << "Introduce una lista de números positivos, para finalizar de introducir numeros ingresa un # negativo:" << endl;
        cin >> numero;

        if (numero < 0)
        {
            cout << "La media de esta lista es de " << media << endl;
            break;
        }
        else if (numero > 0)
        {
            cont++;
        }
    }
    return 0;
}
