/*Se desea leer las calificaciones de una clase de informática y
contar el número total de aprobados (5 o
mayor que 5).*/
#include <iostream>
using namespace std;

int main() {
    int cantidad, nota, aprobados = 0;
    
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidad;
    
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota: " << i+1 << ": ";
        cin >> nota;
        
        if (nota >= 5) {
            aprobados++;
        }
        if (nota > 10 || nota < 0){
            cout << "Haz introducido una nota invalida" <<endl;
            return 0;
        }
    }
    
    cout << "El número total de aprobados es: " << aprobados << endl;
    
    return 0;
}
