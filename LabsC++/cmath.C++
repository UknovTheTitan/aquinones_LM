#include <iostream>
#include <cmath> // Biblioteca que permite varias funciones matematicas
using namespace std;

const double PI = 3.14; // Variable global

double CalcularAreaCirculo(double radio); // Declaracion de la funcion

int main()
{
    double radio;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    if (radio < 0)
    {
        cout << "El radio ingresado no es valido. Por favor ingrese nuevamente, pero no negativo." << endl;
    }
    else
    {
        double area = CalcularAreaCirculo(radio); // Llamar funcion

        cout << "El area del circulo con radio " << radio << " es: " << area << endl;
    }
    return 0;
}

double CalcularAreaCirculo(double radio)
{
    return PI * pow(radio, 2); // pow eleva la potencia del numero
}
