#include <iostream>
using namespace std;

int main()
{
    /* Leer si un numero es multiplo de 5 */
    //Condicionales
    //Declaracion de variables
    int num;
    cout << "Dime un #: ";
    cin >> num;
    //Condicional
    if (num % 5 == 0)
        /* == compara
        = asigna */
    {
        cout << num << " es multiplo de 5" << endl;
    } else{
        cout << num <<" no es multiplo de 5" << endl;
    }
    return 0;
}