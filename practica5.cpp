#include <iostream>

int main() {
    int opcion;
    double valor, resultado;
    
    std::cout << "Selecciona la conversión deseada:" << std::endl;
    std::cout << "1. Centímetros a Metros" << std::endl;
    std::cout << "2. Kilogramos a Gramos" << std::endl;
    std::cout << "Introduce tu opción (1 o 2): ";
    std::cin >> opcion;
    
    switch(opcion) {
        case 1:
            std::cout << "Introduce el valor en centímetros: ";
            std::cin >> valor;
            resultado = valor / 100.0; 
            std::cout << valor << " centímetros son " << resultado << " metros." << std::endl;
            break;
        case 2:
            std::cout << "Introduce el valor en kilogramos: ";
            std::cin >> valor;
            resultado = valor * 1000.0; 
            std::cout << valor << " kilogramos son " << resultado << " gramos." << std::endl;
            break;
        default:
            std::cout << "Opción inválida. Por favor selecciona 1 o 2." << std::endl;
            break;
    }
    
    return 0;
}
