#include <iostream>
#include <string>

using namespace std;

//Declarando las variables
int main() {
    double sumaCalificaciones = 0;
    double promedio;
    string nombreEstudiante;
    double calificacionEstudiante;

    //Bucle de iteracion para clasificar los 10 estudiantes
    for (int i = 1; i <= 10; i++) {
        cout << "Estudiante #" << i << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

        cout << "Ingrese la puntuacion de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;

        //Sumar las calificaciones de cada estudiante
        sumaCalificaciones += calificacionEstudiante;
    }

    //Calcular el promedio general del grupo
    promedio = sumaCalificaciones / 10.0;

    cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl;

    return 0;
}