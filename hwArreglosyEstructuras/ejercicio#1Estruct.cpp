/* Defina, declare e inicialice una estructura para almacenar la información
de los dispositivos electrónicos (celular, tablet, Smart tv, laptop etc.) que distribuye la empresa “Conico”.
Utilice el ciclo apropiado para imprimir
en pantalla información almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato adecuado.*/
#include <iostream>
#include <string>

using namespace std;


// Definicion de la estructura Dispositivo
struct Device
{
    string brand;
    string model;
    int price;
    int quant;
};

    // Declaracion e inicializacion de la estructura Conico
    Device conico[] = {
        {"Samsung", "Galaxy Tab A10", 299, 50},
        {"Apple", "iPad", 499, 30},
        {"Samsung", "Smart TV 4K", 699, 20},
        {"HP", "Dragonfly Pro", 999, 40}};
    void ejercicio1Estruct(){
    // Impresion de la informacion almacenada en la estructura Conico
    cout << "Información de los dispositivos de Conico:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Dispositivo " << i + 1 << ":" << endl;
        cout << "Marca: " << conico[i].brand << endl;
        cout << "Modelo: " << conico[i].model << endl;
        cout << "Precio: $" << conico[i].price << endl;
        cout << "Cantidad disponible: " << conico[i].quant << endl << endl;
    }   
    }       