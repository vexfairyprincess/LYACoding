#include <iostream>
using namespace std;

int sumar(int x, int y);
int resta(int x, int y);
int mult(int x, int y);
void divdd(int x, int y);

int main()
{
    /*Realizar las 4 operaciones aritmeticas*/
cout << sumar (5,8) <<endl;
cout << resta (5,8) <<endl;
cout << mult (5,8) <<endl;
divdd(18, 0);
    return 0;
}

int sumar(int x, int y){
return x + y;
}
int resta(int x, int y){
return x - y;
}
int mult(int x, int y){
return x * y;
}
void divdd(int x, int y){
    if(y > 0){
        cout <<  x / y;
    }
cout << "No se puede dividir entre 0" <<endl;

}
