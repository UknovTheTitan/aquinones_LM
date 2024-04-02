#include <iostream>
using namespace std;

int main() {
    int estadoTarjeta;

    // Ingresar el 1(Si) o el 2(No) para indicar el estado de su tarjeta
    cout << "Ingrese el estado de su tarjeta de biblioteca (1 para activa y 2 para inactiva): ";
    cin >> estadoTarjeta;

    // Si es igual a 1, su tarjeta esta activa
    if (estadoTarjeta == 1) 
    {
        cout << "Su tarjeta esta activa. Usted esta autorizado para el uso del prestamo." << endl;
    }
    // Si es igual a 2, su tarjeta no esta activa
    else if (estadoTarjeta == 2) 
    {
        cout << "Su tarjeta esta inactiva. Usted no esta autorizado para el uso del prestamo." << endl;
    } 
    return 0;
}
