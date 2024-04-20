package LabsJava;
import java.util.Scanner;

public class actividad3 {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner scanner = new Scanner(System.in);

        // Ingresar el 1(Si) o el 2(No) para indicar el estado de su tarjeta
        System.out.println("Ingrese el estado de su tarjeta de biblioteca (1 para activa y 2 para inactiva):");
        int estadoTarjeta = scanner.nextInt();

        // Si es igual a 1, su tarjeta está activa
        if (estadoTarjeta == 1) {
            System.out.println("Su tarjeta está activa. Usted está autorizado para el uso del préstamo.");
        }

        // Si es igual a 2, su tarjeta no está activa
        if (estadoTarjeta == 2) {
            System.out.println("Su tarjeta está inactiva. Usted no está autorizado para el uso del préstamo.");
        } 
    }
}
