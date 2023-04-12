/* Tabla de arrays *9.1* */
#include <iostream>
using namespace std;

int main()
{
    float array[6] = {25.1, 34.2, 5.25, 7.45, 6.09, 7.54};
    for (int i = 0; i < 6; i++)
    {
        cout << "a" << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}
