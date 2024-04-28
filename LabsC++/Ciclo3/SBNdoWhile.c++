#include <iostream>
using namespace std;

// Función para calcular el sueldo bruto y neto de un empleado
void calcularSueldo(float horasTrabajadas, float pagoPorHora, float &sueldoBruto, float &sueldoNeto, float &horasOvertime) {
    sueldoBruto = horasTrabajadas * pagoPorHora;
    if (horasTrabajadas > 40) {
        float horasExtra = horasTrabajadas - 40;
        sueldoBruto += horasExtra * pagoPorHora; // Se pagan las horas extra al doble
        horasTrabajadas -= horasExtra;
        horasOvertime += horasExtra;
    }
    sueldoNeto = sueldoBruto * 0.93; // Se aplica un descuento del 7%
}

int main() {
    float totalPagadoNomina = 0;
    float totalPagadoOvertime = 0;
    float totalHorasOvertime = 0;
    int empleado = 1;

    // Ciclo para procesar cada empleado usando do-while
    do {
        cout << "Empleado " << empleado << ":" << endl;
        float horasTrabajadas, pagoPorHora;
        cout << "Horas trabajadas: ";
        cin >> horasTrabajadas;
        cout << "Pago por hora: ";
        cin >> pagoPorHora;

        float sueldoBruto, sueldoNeto, horasOvertime = 0;

        // Calcular sueldo bruto y neto
        calcularSueldo(horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, horasOvertime);

        // Actualizar totales
        totalPagadoNomina += sueldoNeto;
        totalPagadoOvertime += (sueldoBruto - sueldoNeto);
        totalHorasOvertime += horasOvertime;

        // Imprimir resultados para el empleado
        cout << "Sueldo bruto: $" << sueldoBruto << endl;
        cout << "Sueldo neto: $" << sueldoNeto << endl;
        cout << endl;

        empleado++; // Incrementar el contador de empleado
    } while (empleado <= 3);

    // Imprimir totales
    cout << "Total pagado en nómina: " << totalPagadoNomina << endl;
    cout << "Total pagado en horas overtime: " << totalPagadoOvertime << endl;
    cout << "Total de horas overtime trabajadas: " << totalHorasOvertime << endl;

    return 0;
}
