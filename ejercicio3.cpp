/*Determinar la media de una lista de numeros positivos terminada con un numero no positivo
despues del ultimo numero valido*/
#include <iostream>

using namespace std;

int main() 
{
    int num, sum = 0, cont = 0;

    for (;;) {
        cout << "Ingresa un numero: ";
        cin >> num;
        if (num <= 0) {
            break;
        }
        sum += num;
        cont++;
    }

    if (cont == 0) {
        cout << "No se ingresaron numeros positivos." << endl;
    } else {
        double media = sum / cont; 
        cout << "La media es " << media << endl;
    }

    return 0;
}
