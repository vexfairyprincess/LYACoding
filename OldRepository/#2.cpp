//Determina si un año es bisiesto o no
#include <iostream>
using namespace std;

int main()
{
    /*Declaracion de variables*/
    int year;
    cout << "Introduce un año: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "El año es bisiesto" << endl;
    } else {
        cout << "El año no es bisiesto" << endl;
    }
    return 0;
}

