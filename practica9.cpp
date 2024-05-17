#include <iostream>

using namespace std;

int main() {
    double cantidad, resultado;
    int opcion;

    cout << "Bienvenido al conversor de moneda." << endl;
    cout << "Por favor, introduzca la cantidad en dólares: ";
    cin >> cantidad;

    cout << "Seleccione la moneda a la que desea convertir:" << endl;
    cout << "1. Convertir a euros" << endl;
    cout << "2. Convertir a pesos mexicanos" << endl;
    cout << "3. Convertir a libras" << endl;
    cout << "Introduzca su opción (1, 2 o 3): ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            resultado = cantidad * 0.85; 
            cout << "La cantidad equivalente en euros es: " << resultado << endl;
            break;
        case 2:
            resultado = cantidad * 20.06; 
            cout << "La cantidad equivalente en pesos mexicanos es: " << resultado << endl;
            break;
        case 3:
            resultado = cantidad * 0.73; 
            cout << "La cantidad equivalente en libras es: " << resultado << endl;
            break;
        default:
            cout << "Opción inválida. Por favor, seleccione 1, 2 o 3." << endl;
            break;
    }

    return 0;
}