/*Escriba un convertidor de bytes que permita leer una cantidad de memoria en bytes convertirla a
 cada una de las siguientes medidas: KB, MB, GB, TB, PB, EB, ZB y YB.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    double bytes;
    string medidas[] = {"B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB"};
    int medidaActual = 0;

    cout << "Introduce una cantidad de memoria en bytes: ";
    cin >> bytes;

    while (bytes >= 1000 && medidaActual < 8) {
        bytes /= 1000;
        medidaActual++;
    }

    cout << "La cantidad de memoria es: " << bytes << " " << medidas[medidaActual] << endl;

    return 0;
}
