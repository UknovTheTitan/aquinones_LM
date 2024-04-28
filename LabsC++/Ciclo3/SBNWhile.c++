#include <iostream>

using namespace std;

int main() {
    const float DESCUENTO = 0.07;
    const int NUM_EMPLEADOS = 3;
    const int HORAS_REGULARES = 40;
    float totalPagadoNomina = 0;
    float totalPagadoOvertime = 0;
    int totalHorasOvertime = 0;
    int contadorEmpleados = 0;

    while (contadorEmpleados < NUM_EMPLEADOS) {
        int horasTrabajadas;
        float pagoPorHora;
        cout << "Empleado " << contadorEmpleados + 1 << ":" << endl;
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;
        cout << "Ingrese el pago por hora: $";
        cin >> pagoPorHora;

        float sueldoBruto, sueldoNeto;
        if (horasTrabajadas > HORAS_REGULARES) {
            int horasExtra = horasTrabajadas - HORAS_REGULARES;
            sueldoBruto = (HORAS_REGULARES * pagoPorHora) + (horasExtra * pagoPorHora * 2);
            totalPagadoOvertime += horasExtra * pagoPorHora;
            totalHorasOvertime += horasExtra;
        } else {
            sueldoBruto = horasTrabajadas * pagoPorHora;
        }

        sueldoNeto = sueldoBruto * (1 - DESCUENTO);
        totalPagadoNomina += sueldoNeto;

        cout << "Sueldo bruto: $" << sueldoBruto << endl;
        cout << "Sueldo neto (con descuento del 7%): $" << sueldoNeto << endl;
        cout << endl;

        contadorEmpleados++;
    }

    cout << "Total pagado en nomina: $" << totalPagadoNomina << endl;
    cout << "Total pagado en horas overtime: $" << totalPagadoOvertime << endl;
    cout << "Total de horas overtime trabajadas: " << totalHorasOvertime << " horas" << endl;

    return 0;
}
