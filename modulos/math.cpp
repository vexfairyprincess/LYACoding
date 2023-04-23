#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    /* iostream = maneja la salida de infomacion a la consola */
    cout << "\tHola \nesto es un mensaje...";

    /*math.h*/
    int num = 81;
    double raiz = sqrt(num);
    cout << "La raiz cuadrada de " << num << " es " << raiz << endl;
    int x = 3;
    long int potencia = pow(x, 60);
    cout << potencia << endl;

    return 0;
}