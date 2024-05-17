#include <iostream>
using namespace std;


float calcularTotal(float precio, bool esVIP) {
    float propina;
    
    if (esVIP) {
        propina = precio * 0.05;
    } else {
        propina = precio * 0.1;
    }
    
    return precio + propina;
}

int main() {
    float precio;
    char tipoCliente;

    cout << "Ingrese el precio de lo consumido: $";
    cin >> precio;

    cout << "¿El cliente es VIP? (S/N): ";
    cin >> tipoCliente;

    bool esVIP = (tipoCliente == 'S' || tipoCliente == 's');


    float total = calcularTotal(precio, esVIP);

    cout << "El monto total a pagar es: $" << total << endl;

    return 0;
}