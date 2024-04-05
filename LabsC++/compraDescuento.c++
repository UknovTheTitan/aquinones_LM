#include <iostream>
using namespace std;

int main() {
    // Las variables declaradas a tipo float y char
    float totalCompras;
    char tieneMembresia;

    // Escribir el valor de su compra total
    cout << "Ingrese el total de compras del cliente: $";
    cin >> totalCompras;

    // Escriba S o s si tienes membresia VIP
    cout << "¿El cliente tiene membresia VIP? (S/N): ";
    cin >> tieneMembresia;

    // Si cumple con estas condiciones entonces tendras un descuento especial ;)
    if (totalCompras >= 150 || (tieneMembresia == 'S' || tieneMembresia == 's')) 
    {
        cout << "El cliente es elegible para el descuento especial." << endl;
    } 
    
    // No obtuvistes el descuento especial :(
    else 
    {
        cout << "El cliente no es elegible para el descuento especial." << endl;
    }

    return 0;
}