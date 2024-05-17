#include <iostream>

int main() {
    char vocal;
    
    std::cout << "Introduce una vocal: ";
    std::cin >> vocal;
    
    if (vocal >= 'A' && vocal <= 'Z') {
        vocal = vocal + ('a' - 'A');
    }

    switch(vocal) {
        case 'a':
        case 'e':
        case 'o':
            std::cout << "La vocal es abierta." << std::endl;
            break;
        case 'i':
        case 'u':
            std::cout << "La vocal es cerrada." << std::endl;
            break;
        default:
            std::cout << "Entrada no es una vocal." << std::endl;
            break;
    }
    
    return 0;
}