/* 9.2 */
#include <iostream>
using namespace std;

int main()
{
int nums[8], i, total=0;
for (i = 0; i < 8; i++)
{
cout << "Por favor, introduzca el número: ";
cin >> nums[i];
}
cout << "Lista de números: " << endl;
for (i = 0; i < 8; i++)
{
cout << nums[i] << endl; 
total += nums[i];
}
cout << "La suma de los números es " << total << endl;
return 0;
}