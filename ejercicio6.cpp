/*Leer las notas de una clase de informatica y deducir todas
aquellas que son notables (>=7 y <9)*/

#include <iostream>

using namespace std;

int main()
{
    int n; 
    cout << "Ingrese el número de calificaciones: ";
    cin >> n;

    int calif;            
    int notables = 0; 

    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese la calificación: ";
        cin >> calif;

        if (calif >= 7 && calif < 9)
        {
            notables++;
        }
    }

    cout << "El número de calificaciones notables es: " << notables << endl;

    return 0;
}
