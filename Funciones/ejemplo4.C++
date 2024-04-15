#include <iostream>
using namespace std;

//Definir la funcion Sumar que recibe dos parametros de tipo int y retornar un valor int
int Sumar(int a, int b)
{
    return a + b; //Retornar lasuma de a y b
}

int main()
{
    //Llama a la funcion con los argumentos 5 y 7
    int resultado = Sumar (5, 7);

    //Imprime el resultado de la suma
    cout << "La suma es: " << resultado << endl;
    return 0;
}