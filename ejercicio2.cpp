/*Dado el nombre de un mes y si el anio o no es bisiesto,
deducir el numero de dias del mes*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int anio, mes, dias;
    cout << "Ingrese un año: ";
    cin >> anio;
    
    for (int i = 0; i < 1; i++){
    bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;
    
    if (mes == 2) {
        if (bisiesto) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }
    }
    
    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " días." << endl;
    
    return 0;
}
