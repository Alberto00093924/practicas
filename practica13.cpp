#include <iostream>
using namespace std;


string enteroARomano(int numero) {
    switch (numero) {
        case 1:
            return "I";
        case 2:
            return "II";
        case 3:
            return "III";
        case 4:
            return "IV";
        case 5:
            return "V";
        default:
            return "Error: número fuera de rango";
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entero del 1 al 5: ";
    cin >> numero;

    
    if (numero >= 1 && numero <= 5) {
        string romano = enteroARomano(numero);
        cout << "El número romano equivalente es: " << romano << endl;
    } else {
        cout << "Error: número fuera de rango." << endl;
    }

    return 0;
}