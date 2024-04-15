#include <iostream>
using namespace std;

//Definicion de la funcion ObtenerPi que no recibe parmetros y retomar un valor doble
double ObtenerPi()
{
    return 3.14;
}

int main()
{
    double radio = 5;
    //Multiplicar el radio por si mismo para obtener el cuadrado del radio
    double area = ObtenerPi() * (radio * radio);

    cout << "El area es " << area << endl;
    return 0;
}