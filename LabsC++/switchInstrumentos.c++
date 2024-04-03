#include <iostream>
using namespace std;

int main()
{
    int tipo_instrumento;

    // Introduzca el tipo de instrumento que deseas selecionar
    cout << "Ingrese el tipo de instrumento" <<endl;
    cout << "1.Guitarra, 2.Piano, 3.Batería, 3.Violín, 4.Flauta:" <<endl;
    cin >> tipo_instrumento;
    


    switch (tipo_instrumento)
    {
    case 1: // guitarra:
        cout << "El descuento es del 10%" <<endl;
        break;

    case 2: //piano
        cout << "El descuento es del 15%" <<endl;
        break;
    
    case 3: //bateria
        cout << "El descuento es del 20%" <<endl;
        break;

    case 4: // Violin
        cout << "El descuento es del 12%" <<endl;
        break;

    case 5: // Flauta
        cout << "El descuento es del 8%" <<endl;
    
    default:
        cout << "Instrumento no reconocido. intente de nuevo." <<endl;
        break;
    }
    return 0;
}
