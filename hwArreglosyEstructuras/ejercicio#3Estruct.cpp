/*Defina y declare una estructura para almacenar la información personal
y profesional de 5 atletas olímpicos nicaragüenses. Utilice un ciclo para solicitar los
datos al usuario, utilice un ciclo para imprimir los datos en pantalla y recuerde utilizar
las funciones de E/S con el formato adecuado. En este ejercicio se deben anidar dos
estructuras.*/
#include <iostream>
#include <string.h>

using namespace std;

// Estructura de la informacion personal
struct infoPersonal
{
    string name;
    int age;
};

// Estrucutra de la informacion profesional
struct infoProf
{
    /* data */
    string sport;
    int medals;
};

struct athlNica
{
    infoPersonal athlPersonal;
    infoProf athlProf;
};

void ejercicio3Estruct()
{
   const int numAthl = 5;
    athlNica atletas[numAthl];

    // Solicitar datos al usuario
    for (int i; i < numAthl; i++)
    {
        cout << "Atleta # " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, atletas[i].athlPersonal.name);
        cout << "Edad: ";
        cin >> atletas[i].athlPersonal.age;
        cin.ignore();
        cout << "Deporte: ";
        getline(cin, atletas[i].athlProf.sport);
        cout << "Medallas: ";
        cin >> atletas[i].athlProf.medals;
        cin.ignore();
        cout << endl;
    }

    // Imprimir datos
    for (int j = 0; j < numAthl; j++)
    {
        cout << "Atleta #" << j + 1 << endl;
        cout << "Nombre: " << atletas[j].athlPersonal.name << endl;
        cout << "Edad: " << atletas[j].athlPersonal.age << endl;
        cout << "Deporte: " << atletas[j].athlProf.sport << endl;
        cout << "Medallas: " << atletas[j].athlProf.medals << endl;
        cout << endl;
    }
}   