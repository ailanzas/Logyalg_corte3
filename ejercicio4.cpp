/*Imprimir todos los numeros primos entre 2 y 1000 inclusive*/
#include <iostream>

using namespace std;

int main() {
    cout << "Números primos entre 2 y 1000: " << endl;

    for (int i = 2; i <= 1000; i++) {
        bool primo = true;

        for (int a = 2; a < i; a++) {
            if (i % a == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << i << endl;
        }
    }

    return 0;
}
