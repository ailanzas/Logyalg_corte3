/*Leer 100 numeros. Determinar la media de los numeros positivos
y la media de los numeros negativos*/
#include <iostream>

using namespace std;

int main()
{
    int numero, sumapositivos = 0, sumanegativos = 0, cantpositivos = 0, cantnegativos = 0;

    for (int i = 1; i <= 100; i++)
    {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        if (numero > 0)
        {
            sumapositivos += numero;
            cantpositivos++;
        }
        else if (numero < 0)
        {
            sumanegativos += numero;
            cantnegativos++;
        }
    }

    if (cantpositivos > 0)
    {
        cout << "La media de los números positivos es: " << (double)sumapositivos / cantpositivos << endl;
    }
    else
    {
        cout << "No se ingresaron números positivos." << endl;
    }

    if (cantnegativos > 0)
    {
        cout << "La media de los números negativos es: " << (double)sumanegativos / cantnegativos << endl;
    }
    else
    {
        cout << "No se ingresaron números negativos." << endl;
    }

    return 0;
}

