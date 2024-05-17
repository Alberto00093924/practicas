#include <iostream>
using namespace std;


void dibujarTriangulo(int altura) {
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}


void dibujarRectangulo(int altura, int ancho) {
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= ancho; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}


void dibujarRombo(int altura) {
    
    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= altura - i; ++j) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int i = altura - 1; i >= 1; --i) {
        for (int j = 1; j <= altura - i; ++j) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int opcion, altura, ancho;

    cout << "Seleccione el tipo de patrón que desea generar:" << endl;
    cout << "1. Triángulo" << endl;
    cout << "2. Rectángulo" << endl;
    cout << "3. Rombo" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            dibujarTriangulo(altura);
            break;
        case 2:
            cout << "Ingrese la altura del rectángulo: ";
            cin >> altura;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            dibujarRectangulo(altura, ancho);
            break;
        case 3:
            cout << "Ingrese la altura del rombo (debe ser un número impar): ";
            cin >> altura;
            dibujarRombo(altura);
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}