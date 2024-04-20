#include <iostream>
using namespace std;

int main() 
{
    // Declarando las variables
    double temperatura, promedio, contador = 0;
    
    // Utilizar el ciclo for para reunir las 12 temperaturas
    for (int i = 1; i <= 12; ++i)
    {
        cout << "Ingrese la temperatura del mes " << i << ": ";
        cin >> temperatura;
        
        contador += temperatura; // Sumando las temperaturas en un acumulador
    }
    
    // Proceso para obtener un promedio
    promedio = contador / 12;
    
    // El resultado del promedio
    cout << "El promedio de las temperaturas es: " << promedio << endl;
    
    return 0;
}