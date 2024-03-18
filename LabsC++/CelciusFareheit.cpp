#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double fareheit;

    cout <<"Ingrese la temperatura en grados celsius: ";
    cin >>celsius;

    fareheit = celsius * 9/5 + 32;

    cout <<"La temperatura ingresada en grados celsius es equivalente a " <<fareheit << "grados farenheit."<<endl;

    return 0;
}