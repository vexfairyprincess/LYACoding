/*Leer las notas de una clase de informática y deducir
todas aquellas que son NOTABLES (>= 7 y < 9).*/
#include <iostream>
using namespace std;

int main() {
    int cantidad, nota;
    
    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;
    
    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        
        if (nota >= 7 && nota < 9) {
            cout << "La nota " << nota << " es notable" << endl;
        }
        if(nota > 10 || nota < 0 )
        {
            cout << "Haz ingresado una nota invalida" << endl;
            return 0;
        }
       
    }
    if(nota < 7){
            cout << "No hay ninguna nota notable" << endl;

        }
    
    return 0;
}
