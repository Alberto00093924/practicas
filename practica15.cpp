#include <iostream>
#include <locale> 
using namespace std;

int main() {
    setlocale(LC_ALL, "spanish"); 

    int edadPerro, edadHumana;

    cout << "Ingrese la edad de su perro en años: ";
    cin >> edadPerro;

    if (edadPerro <= 0) {
        cout << "La edad del perro debe ser un número positivo." << endl;
        return 1;
    } else if (edadPerro <= 2) {
        edadHumana = edadPerro * 10.5;
    } else {
        edadHumana = 21 + (edadPerro - 2) * 4;
    }

    cout << "La edad de su perro en años humanos es aproximadamente: " << edadHumana << " años." << endl;

    return 0;
}