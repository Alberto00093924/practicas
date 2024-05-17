#include <iostream>
#include <iomanip>
using namespace std;


float calcularVoltaje(float corriente, float resistencia) {
    return corriente * resistencia;
}


float calcularCorriente(float voltaje, float resistencia) {
    return voltaje / resistencia;
}


float calcularResistencia(float voltaje, float corriente) {
    return voltaje / corriente;
}

int main() {
    int opcion;
    float voltaje, corriente, resistencia;

    cout << "Seleccione el valor que desea encontrar:" << endl;
    cout << "1. Voltaje (V)" << endl;
    cout << "2. Corriente (I)" << endl;
    cout << "3. Resistencia (R)" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el valor de la corriente (I): ";
            cin >> corriente;
            cout << "Ingrese el valor de la resistencia (R): ";
            cin >> resistencia;
            voltaje = calcularVoltaje(corriente, resistencia);
            cout << "El voltaje (V) es: " << fixed << setprecision(2) << voltaje << " voltios." << endl;
            break;
        case 2:
            cout << "Ingrese el valor del voltaje (V): ";
            cin >> voltaje;
            cout << "Ingrese el valor de la resistencia (R): ";
            cin >> resistencia;
            corriente = calcularCorriente(voltaje, resistencia);
            cout << "La corriente (I) es: " << fixed << setprecision(2) << corriente << " amperios." << endl;
            break;
        case 3:
            cout << "Ingrese el valor del voltaje (V): ";
            cin >> voltaje;
            cout << "Ingrese el valor de la corriente (I): ";
            cin >> corriente;
            resistencia = calcularResistencia(voltaje, corriente);
            cout << "La resistencia (R) es: " << fixed << setprecision(2) << resistencia << " ohmios." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}