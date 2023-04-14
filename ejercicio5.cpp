/*Se desea leer las calificaciones de una clase de informatica
y contar el numero total de aprobados (5 o mayor que 5)*/
#include <iostream>

using namespace std;

int main() {
    int cantidad;
    int nota;
    int aprobados = 0;

    cout << "Ingrese el número de calificaciones: ";
    cin >> cantidad;

    for(int i = 1; i <= cantidad; i++) {
        cout << "Ingrese la calificación #: ";
        cin >> nota;

        if(nota >= 5) {
            aprobados++;
        }
    }

    cout << "El número total de aprobados es: " << aprobados << endl;

    return 0;
}