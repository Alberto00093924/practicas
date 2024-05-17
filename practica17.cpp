#include <iostream>
using namespace std;

int main() {
    int horasTrabajadas;
    float tarifaPorHora, salarioSemanal;

    
    cout << "Ingrese el número de horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese la tarifa por hora (1, 2 o 7 dólares por hora): ";
    cin >> tarifaPorHora;

    
    if (tarifaPorHora == 1 || tarifaPorHora == 2 || tarifaPorHora == 7) {
        salarioSemanal = horasTrabajadas * tarifaPorHora * 7;
        cout << "El salario semanal del empleado es: $" << salarioSemanal << endl;
    } else {
        cout << "Tarifa no válida. La tarifa debe ser 1, 2 o 7 dólares por hora." << endl;
    }

    return 0;
}