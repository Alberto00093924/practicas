#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el área de un círculo
void calcularAreaCirculo() {
    const double PI = 3.141592653589793;
    double radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    if (radio <= 0) {
        cout << "El radio debe ser un número positivo." << endl;
        return;
    }

    double area = PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;
}

// Función para calcular el área de un cuadrado
void calcularAreaCuadrado() {
    double lado;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    if (lado <= 0) {
        cout << "El lado debe ser un número positivo." << endl;
        return;
    }

    double area = pow(lado, 2);
    cout << "El área del cuadrado es: " << area << endl;
}

// Función para calcular el área de un rectángulo
void calcularAreaRectangulo() {
    double largo, ancho;

    cout << "Ingrese el largo del rectángulo: ";
    cin >> largo;
    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho;

    if (largo <= 0 || ancho <= 0) {
        cout << "El largo y el ancho deben ser números positivos." << endl;
        return;
    }

    double area = largo * ancho;
    cout << "El área del rectángulo es: " << area << endl;
}

// Función para calcular el área de un triángulo
void calcularAreaTriangulo() {
    double base, altura;

    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    if (base <= 0 || altura <= 0) {
        cout << "La base y la altura deben ser números positivos." << endl;
        return;
    }

    double area = (base * altura) / 2;
    cout << "El área del triángulo es: " << area << endl;
}

int main() {
    int opcion;

    do {
        cout << "\nCalculadora de Áreas\n";
        cout << "1. Calcular área de un círculo\n";
        cout << "2. Calcular área de un cuadrado\n";
        cout << "3. Calcular área de un rectángulo\n";
        cout << "4. Calcular área de un triángulo\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                calcularAreaCirculo();
                break;
            case 2:
                calcularAreaCuadrado();
                break;
            case 3:
                calcularAreaRectangulo();
                break;
            case 4:
                calcularAreaTriangulo();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida, por favor intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}