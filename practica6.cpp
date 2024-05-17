#include <iostream>

int main() {
    double montoTotal, montoConDescuento;
    int descuento;

    std::cout << "Introduce el monto total de la compra: ";
    std::cin >> montoTotal;

    std::cout << "Selecciona el porcentaje de descuento: " << std::endl;
    std::cout << "1. 5%" << std::endl;
    std::cout << "2. 10%" << std::endl;
    std::cout << "3. 15%" << std::endl;
    std::cout << "Introduce tu opcion (1, 2 o 3): ";
    std::cin >> descuento;

    switch(descuento) {
        case 1:
            montoConDescuento = montoTotal - (montoTotal * 0.05);
            std::cout << "Monto total despues del 5% de descuento: " << montoConDescuento << std::endl;
            break;
        case 2:
            montoConDescuento = montoTotal - (montoTotal * 0.10);
            std::cout << "Monto total despues del 10% de descuento: " << montoConDescuento << std::endl;
            break;
        case 3:
            montoConDescuento = montoTotal - (montoTotal * 0.15);
            std::cout << "Monto total despues del 15% de descuento: " << montoConDescuento << std::endl;
            break;
        default:
            std::cout << "Opcion invalida. Por favor selecciona 1, 2 o 3." << std::endl;
            break;
    }

    return 0;
}