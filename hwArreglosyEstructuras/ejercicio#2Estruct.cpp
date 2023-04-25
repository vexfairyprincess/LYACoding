/* Defina y declare una estructura para almacenar la información de los
datos académicos y personales de los estudiantes de la carrera de Ingeniería en
Sistemas de Información de la Universidad Centroamericana (UCA). Solicite los datos
al usuario, utilice el ciclo apropiado para imprimir en pantalla la información
almacenada y recuerde utilizar las funciones de E/S con el formato adecuado.*/
#include <iostream>
#include <string>

using namespace std;

void ejercicio2Estruct(){
// Definicion de la estructura estudiantesGays
struct studentGays
{
    string nameGay;
    int cifGay;
    string courseGay;
    int yearGay;
};

    int quantGays;
    cout << "¿Cuántos jovenes homosexuales estudiantes de la UCA desea ingresar? ";
    cin >> quantGays;
    cin.ignore();

    // Declaracion e inicializacion
    studentGays uca[quantGays];

    // Solicitud al usuario
    for (int i = 0; i < quantGays; i++)
    {
        cout << "Introduce la información del estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, uca[i].nameGay);
        cout << "CIF: ";
        cin >> uca[i].cifGay;
        cin.ignore();
        cout << "Que año de carrera esta cursando?: ";
        cin >> uca[i].yearGay;
        cin.ignore();
        if (uca[i].yearGay > 5)
        {
            cout << "El maximo de años de la carrera es de 5 años" << endl;
            return void();
        }
        cout << "Clases inscritas: ";
        getline(cin, uca[i].courseGay);
        cout << endl;
    }

    // Impresion de la informacion
    cout << "Información de los estudiantes de la UCA: " << endl;
    for (int j = 0; j < quantGays; j++)
    {
        cout << "Estudiante " << j + 1 << ":" << endl;
        cout << "Nombre: " << uca[j].nameGay << endl;
        cout << "CIF: " << uca[j].cifGay << endl;
        cout << "Año: " << uca[j].yearGay << endl;
        cout << "Clases inscritas: " << uca[j].courseGay << endl
             << endl;
    }
}