#include <iostream>
using namespace std;
void calcMedia();
bool esPositivo(int num);

void calcMedia()
{
    int num = 1, suma = 0, cant = 0;
    float media = 0;

    for (int i = 0; num >= 0; i++)
    {
        cout << "Dime un # ";
        cin >> num;
        if (esPositivo(num))
        {
            suma += num;
            cant++;
        }
        suma += num;
    }
    media = suma / cant;
    cout << "La media es: " << media << endl;
}
bool esPositivo(int num)
{
    return num > 0;
}