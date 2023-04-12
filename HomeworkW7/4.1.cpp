/* Escribir las sentencias si apropiadas para cada una
de las siguientes condiciones:
a) Si un ángulo es igual a 90 grados, imprimir el
mensaje "El ángulo es un ángulo recto"
sino imprimir el mensaje "El ángulo no es
un ángulo recto".
b) Si la temperatura es superior a 100 grados,
visualizar el mensaje “por encima del punto de ebullición del agua” sino visualizar el mensaje “por
debajo del punto de ebullición del agua”.
c) Si el número es positivo, sumar el número a total
de positivos, sino sumar al total de negativo
d) Si x es mayor que y, y z es menor que 20, leer
un valor para p.
e) Si distancia es mayor que 20 y menos que 35,
leer un valor para tiempo.*/
#include <iostream>

using namespace std;

int main()
{
    int option;
    float angle, temp, num, x, y, z, distance, totalPositv = 0, totalNegatv = 0, p = 0, time = 0;

    do
    {
        cout << "Seleccione una opcion: " << endl;
        cout << "1. Comprobar si un angulo es recto (90 grados)" << endl;
        cout << "2. Comprobar si la temperatura esta por encima o por debajo del punto de ebullicion del agua" << endl;
        cout << "3. Sumar numeros positivos y negativos" << endl;
        cout << "4. Leer un valor para p si x es mayor que y y z es menor que 20" << endl;
        cout << "5. Leer un valor para tiempo si la distancia es mayor que 20 y menos que 35" << endl;
        cout << "0. Salir" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Introduzca un angulo: ";
            cin >> angle;
            if (angle == 90)
            {
                cout << "El angulo es un angulo recto" << endl;
            }
            else
            {
                cout << "El angulo no es un angulo recto" << endl;
            }
            break;

        case 2:
            cout << "Introduzca una temperatura: ";
            cin >> temp;
            if (temp > 100)
            {
                cout << "Por encima del punto de ebullicion del agua" << endl;
            }
            else
            {
                cout << "Por debajo del punto de ebullicion del agua" << endl;
            }
            break;

        case 3:
            cout << "Introduzca un numero: ";
            cin >> num;
            if (num >= 0)
            {
                totalPositv += num;
            }
            else
            {
                totalNegatv += num;
            }
            cout << "Total de numeros positivos: " << totalPositv << endl;
            cout << "Total de numeros negativos: " << totalNegatv << endl;
            break;

        case 4:
            cout << "Introduzca el valor de x: ";
            cin >> x;
            cout << "Introduzca el valor de y: ";
            cin >> y;
            cout << "Introduzca el valor de z: ";
            cin >> z;
            if (x > y && z < 20)
            {
                cout << "Introduzca un valor para p: ";
                cin >> p;
            }
            break;

        case 5:
            cout << "Introduzca la distancia: ";
            cin >> distance;
            if (distance > 20 && distance < 35)
            {
                cout << "Introduzca un valor para tiempo: ";
                cin >> time;
            }
            break;

        case 0:
            cout << "El programa se ha cerrado exitosamente" << endl;
            break;

        default:
            cout << "Opcion invalida. Introduzca una opcion valida." << endl;
            break;
        }
    } while (option != 0);

    return 0;
}
