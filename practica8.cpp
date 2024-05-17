#include <iostream>

using namespace std;

int main() {
    int edad, voto;
    
    cout << "Bienvenido al sistema de votacion." << endl;
    cout << "Por favor, ingrese su edad: ";
    cin >> edad;
    
    if (edad < 18) {
        cout << "Lo siento, debes ser mayor de edad para votar." << endl;
        return 1;
    }
    
    cout << "Estos son los candidatos: " << endl;
    cout << "1. Candidato A" << endl;
    cout << "2. Candidato B" << endl;
    cout << "3. Candidato C" << endl;
    cout << "Por favor, ingrese el numero del candidato por el que desea votar: ";
    cin >> voto;
    
    switch (voto) {
        case 1:
            cout << "Su voto por el Candidato A ha sido registrado correctamente." << endl;
            break;
        case 2:
            cout << "Su voto por el Candidato B ha sido registrado correctamente." << endl;
            break;
        case 3:
            cout << "Su voto por el Candidato C ha sido registrado correctamente." << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, ingrese un numero valido de candidato." << endl;
            break;
    }
    
    return 0;
}