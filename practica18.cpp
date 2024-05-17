#include <iostream>
#include <locale> 
using namespace std;


string obtenerMensaje(int puntuacion) {
    switch (puntuacion) {
        case 1:
            return "¡Necesitas mejorar mucho!";
        case 2:
            return "Todavía tienes mucho por mejorar.";
        case 3:
            return "Necesitas practicar más para obtener una mejor puntuación.";
        case 4:
            return "Estás en camino, pero aún puedes mejorar.";
        case 5:
            return "¡Estás en el promedio, sigue practicando!";
        case 6:
            return "¡Buena actuación, pero aún hay margen para mejorar!";
        case 7:
            return "¡Excelente trabajo! Tu actuación fue sólida.";
        case 8:
            return "¡Muy impresionante! Estás cerca de la perfección.";
        case 9:
            return "¡Casi perfecto! ¡Increíble actuación!";
        case 10:
            return "¡Increíble! ¡Puntuación perfecta! Eres un maestro de las acrobacias.";
        default:
            return "Puntuación no válida.";
    }
}

int main() {
    setlocale(LC_ALL, "spanish"); 

    int puntuacion;

    cout << "Ingrese la puntuación (de 1 a 10): ";
    cin >> puntuacion;

    
    if (puntuacion >= 1 && puntuacion <= 10) {
        
        cout << obtenerMensaje(puntuacion) << endl;
    } else {
        cout << "Puntuación no válida." << endl;
    }

    return 0;
}