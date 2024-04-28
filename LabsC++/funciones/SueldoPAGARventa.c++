#include <iostream>
using namespace std;

//La funcion que se llamara mas tarde
double porcentage(double m)
{
    return m * 0.15;
}

int main()
{
    //Crear variables internas
    int ventas;
    double bono;

    cout << "El vendedor vendio: ";
    cin >> ventas;

    //Crear un ciclo if para realizar los procesos y pagar al empleado con su bono
    if (ventas >= 1500)
    {
        double total = porcentage(ventas);

        bono = total + 125;

        cout << "El vendedor vendio: " << ventas << " recibira 125 de bono dando un total de  " << bono << "" << endl;
    }

    //para cerrar el ciclo y dar el pago del vendedor sin bono
    else
    {
        double total = porcentage(ventas);

        cout << "El vendedor vendio: " << ventas << " no recibira bono dandole un total de " << total <<endl;
    }
    return 0;
}