#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
 
 /*sting*/
    string cadena = "hola mundo...";
 
    for(int i = 0; i < cadena.size(); i++)
    {
        cadena[i] = toupper(cadena[i]);
    }
cout << cadena <<endl;

    return 0;
}