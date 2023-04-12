// Dado el nombre de un mes y si el año es o no bisiesto, deducir el número de días del mes.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month;
    int year, days;

    while (true)
    {
        cout << "Ingrese el año: ";
        if (cin >> year)
        {
            break;
        }
        else
        {
            cout << "El año debe ser un numero entero. Por favor, ingrese el año nuevamente." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return 0;
        }
    }

    cout << "Ingrese el nombre del mes (en minisculas): " << endl;
    cin >> month;
    if (month == "febrero")
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    else if (month == "abril" || month == "junio" || month == "septiembre" || month == "noviembre")
    {
        days = 30;
    }
    else if (month == "enero" || month == "marzo" || month == "mayo" || month == "julio" ||
             month == "agosto" || month == "octubre" || month == "diciembre")
    {
        days = 31;
    }
    else
    {
        cout << "El mes o año que has introducido es inexistente, recuerda que debes introducir el nombre del mes en minuscula" << endl;
        return 0;
    }

    for (int i = 1; i <= days; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
