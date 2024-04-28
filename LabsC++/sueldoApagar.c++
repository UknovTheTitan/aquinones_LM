#include <iostream>
using namespace std;

// Variables globales
int ventas;
double sueldo;

// Función para calcular el bono
double porcentaje(double m)
{
    return m * 0.15;
}

int main()
{
    //mensaje que se vera y su variable asociada
    cout << "Ingrese el sueldo base del vendedor: ";
    cin >> sueldo;

    cout << "El vendedor vendió: ";
    cin >> ventas;

    //Ciclo if para el procedimiento y darle el pago al vendedor con su bono
    if (ventas >= 1500)
    {
        double total = porcentaje(ventas);
        double bono = total + 125;

        cout << "El vendedor vendió: " << ventas << " y recibirá un bono de 125, dando un total de " << bono << endl;
    }

    // El resultado alterno si no se cumple la condicion if (No recibe bono)
    else
    {
        double total = porcentaje(ventas);
        cout << "El vendedor vendió: " << ventas << " y no recibirá bono, dando un total de " << sueldo + total << endl;
    }

    return 0;
}
