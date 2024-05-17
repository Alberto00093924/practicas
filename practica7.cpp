#include <iostream>

int main() {
    double temperaturaCelsius, temperaturaConvertida;
    int opcion;

    std::cout << "Introduce la temperatura en Celsius: ";
    std::cin >> temperaturaCelsius;

    std::cout << "Selecciona la conversion deseada:" << std::endl;
    std::cout << "1. Convertir a Fahrenheit" << std::endl;
    std::cout << "2. Convertir a Kelvin" << std::endl;
    std::cout << "Introduce tu opcion (1 o 2): ";
    std::cin >> opcion;

    switch(opcion) {
        case 1:
            temperaturaConvertida = (temperaturaCelsius * 9/5) + 32;
            std::cout << "La temperatura en Fahrenheit es: " << temperaturaConvertida << std::endl;
            break;
        case 2:
            temperaturaConvertida = temperaturaCelsius + 273.15;
            std::cout << "La temperatura en Kelvin es: " << temperaturaConvertida << std::endl;
            break;
        default:
            std::cout << "Opcion invalida. Por favor selecciona 1 o 2." << std::endl;
            break;
    }

    return 0;
}