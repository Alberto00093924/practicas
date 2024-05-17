#include <iostream>

int main() {
    int calificacion;
    
    std::cout << "Introduce una calificación numérica entre 0 y 100: ";
    std::cin >> calificacion;

    if (calificacion < 0 || calificacion > 100) {
        std::cout << "Calificación inválida. Por favor introduce un número entre 0 y 100." << std::endl;
    } else {
        
        char letra;
        if (calificacion >= 90) {
            letra = 'A';
        } else if (calificacion >= 80) {
            letra = 'B';
        } else if (calificacion >= 70) {
            letra = 'C';
        } else if (calificacion >= 60) {
            letra = 'D';
        } else {
            letra = 'F';
        }
        
        std::cout << "La calificación correspondiente es: " << letra << std::endl;
    }
    
    return 0;
}