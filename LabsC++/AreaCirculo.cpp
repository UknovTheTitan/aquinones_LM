#include <iostream>
using namespace std;

int main()
{
    //Definicion de variables
    double area;
    double radio;
    const double PI = 3.14; //Indetificar constante

    cout <<"Ingrese la medida del radio: "; //Escribir 15 para el ejemplo
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El are del circulo es: "<<area <<endl;

    return 0;
}