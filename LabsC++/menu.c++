#include <iostream>
using namespace std;

int main()
{
    int opcion

    cout <<"Boenvenido a Johanas's Cafe: "<<endl;
    cout <<"Menu " <<endl;
    cout <<"1. Cafe " <<endl;
    cout <<"2. Te " <<endl;
    cout <<"3. Chocolate Caliente " <<endl;
    cout <<"4. Jugo de Narranja  " <<endl;
    cout <<"--------------------------------" <<endl;
    cout <<"Por favor seleccionar tu bebida: ";

    switch (opcion)
    {
        case 1: //Cafe:
         cout << "El precio del cafe es 2$"<<endl;
         break;

        case 2: //Te
        cout << "El precio del Te es 1.5" <<endl;
        break;

        case 3: //Chocolate Caliente 
        cout << "El precio del Chocolate Caliente es 2.5" <<endl;
        break;

        case 4: //Jugo de Naranja
        cout << "El precio del del Jugo de Naranja es 3" <<endl
        break;

        default: //En caso de que el usuario ingrese una opcion no valida
            cout << "Opcion valida. Porfavor, seleciona una bebida del menu" <<endl;

    }

    return 0;
}