#include <iostream>
#include <locale> 
using namespace std;

int main() {
    setlocale(LC_ALL, "spanish"); 
    int year;
    cout << "Ingresa un año: ";
    cin >> year;

    switch (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        case true:
            cout << year << " es un año bisiesto." << endl;
            break;
        case false:
            cout << year << " no es un año bisiesto." << endl;
            break;
    }

    return 0;
}