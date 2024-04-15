#include <iostream>
using namespace std;

int main() {
    //El estring para almacenar el nombre
    string nombreEscrito;

    //escriba el nombre que quieras
    cout << "Entre su nombre: ";
    cin >> nombreEscrito;

    //El inicio del contador
    int contador = 0;

    //usar el bucle while para imprimir el nombre 10 veces
    while (contador < 10) {
        cout << "Hola, " << nombreEscrito << endl;
        
        //incrementar el contador por cada iteracion
        contador++;
    }

    //Como vez bye bye!
    cout << "bye bye!" << endl;

    return 0;
}
