#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tiendas(3, 0); 

    int cantidad, opcion;
    cout << "Ingrese la cantidad de zanahorias a suministrar: ";
    cin >> cantidad;

    cout << "Seleccione la tienda a la que se suministrarán las zanahorias:\n";
    cout << "1. Tienda 1\n";
    cout << "2. Tienda 2\n";
    cout << "3. Tienda 3\n";
    cout << "Ingrese su opción: ";
    cin >> opcion;

    
    switch(opcion) {
        case 1:
            tiendas[0] += cantidad;
            break;
        case 2:
            tiendas[1] += cantidad;
            break;
        case 3:
            tiendas[2] += cantidad;
            break;
        default:
            cout << "Opción inválida." << endl;
            return 1;
    }

    cout << "Se han suministrado " << cantidad << " zanahorias a la tienda " << opcion << "." << endl;

    
    cout << "Cantidad total de zanahorias suministradas a cada tienda:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Tienda " << i + 1 << ": " << tiendas[i] << " zanahorias." << endl;
    }

    return 0;
}