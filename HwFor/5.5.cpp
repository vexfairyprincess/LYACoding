/*Imprimir todos los numeros primos entre 2 y 1000
incluyedolos*/
#include <iostream>

using namespace std;

int main()
{
    int i, k;
    for (i = 2; i <= 1000; i++)
    {
        bool numeroPrimo = true;
        for (k = 2; k <= i / 2; k++)
        {
            if (i % k == 0)
            {
                numeroPrimo = false;
                break;
            }
        }
        if (numeroPrimo)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}