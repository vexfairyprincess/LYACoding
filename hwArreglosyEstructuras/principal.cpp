//Programa principal
#include <iostream>
#include "ejercicio#1Arrays.cpp"
#include "ejercicio#2Arrays.cpp"
#include "ejercicio#1Estruct.cpp"
#include "ejercicio#2Estruct.cpp"
#include "ejercicio#3Estruct.cpp"

using namespace std;

void menu();

int main()
{
    int menu;
    cout << "Menu Principal" << endl;
    cout << "Ingrese el numero segun el ejercicio que quiera acceder" << endl;
    cout << "1. Arreglos" << endl;
    cout << "2. Estructuras" << endl;
    cout << "3. Salir" << endl;
    cin >> menu;
    system("clear");

    switch (menu)
    {
    case 1 : 
        int menuArreglos;
            cout << "1. Tabla de Arreglos numero 1" << endl;
            cout << "2. Tabla de Arreglos numero 2" << endl;
            cin >> menuArreglos;
            switch (menuArreglos)
            {
            case 1 : 
                system("clear");
                ejercicio1Array();
                cout << endl;
                main();
                break;
            
            case 2 :
            system("clear");
            ejercicio2Array();
            cout << endl;
            main();
            default:
            system("clear");
            cout << "Opcion Invalida" << endl;
            main();
                break;
            }
       
        break;

    case 2 :
        int menuEstruct;
        cout << "1. Datos de la empresa de distribucion tecnologica Conico" << endl;
        cout << "2. Informacion de estudiantes de ingenieria en sistemas de la UCA" << endl;
        cout << "3. Informacion de atletas nicaraguenses" << endl;
        cin >> menuEstruct;
        switch (menuEstruct)
        {
        case 1 :
        system("clear");
        ejercicio1Estruct();
        cout << endl;
        main();
            break;
        
        case 2: 
        system("clear");
        ejercicio2Estruct();
        cout << endl;
        main();

        case 3 : 
        system("clear");
        ejercicio3Estruct();
        cout << endl;
        main();

        default:
        system("clear");
        cout << "Opcion invalida" << endl;
        main();
            break;
        }
    default:
    system("clear");
    cout << "Saliendo del programa... " << endl;
    
        break;
    }
    return 0;
}