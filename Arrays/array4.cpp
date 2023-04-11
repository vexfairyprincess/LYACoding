/* 9.4 */
#include <iostream>
#define MAX 10
using namespace std;

int main() {
    float muestra[MAX];
    int i;
    cout << "Introduzca una lista de " << MAX << " elementos positivos." << endl;
    for (i = 0; i < MAX; muestra[i] > 0 ? ++i : i) {
        cin >> muestra[i];
    }
    cout << "\nDatos leidos del teclado: ";
    for (i = 0; i < MAX; ++i) {
        cout << muestra[i] << "\t";
    }
    return 0;
}
