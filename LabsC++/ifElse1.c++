#include <iostream>
using namespace std;

int main() {
    int antiguedad;
    
    cout << "Ingrese la antiguedad del empleado (in years): ";
    cin >> antiguedad;
    
    if (antiguedad >= 5) {
        cout << "Es elegible para el bono, recibira $1000." << endl;
    } else {
        cout << "El empleado no es elegible para el bono." << endl;
    }
    
    return 0;
}