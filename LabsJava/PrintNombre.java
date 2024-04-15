package LabsJava;

import java.util.Scanner;

public class PrintNombre {
    public static void main(String[] args) {
        // Declarando el objeto scaner
        Scanner scanner = new Scanner(System.in);
        
        //Para almacenar el nombre a escribir
        String nombreEscrito;

        // Solicitar a alguna persona que esciba un nombre
        System.out.print("Ingrese su nombre: ");
        nombreEscrito = scanner.next();

        // Empezar un contador
        int contador = 0;

        //utilizar la ayuda del bucle para imprimir el nombre 10 veces
        while (contador < 10) {
            System.out.println("Hola, " + nombreEscrito);
            
            //aumentar el contador por cada iteracion
            contador++;
        }

        // Este es el mensage de cuando te dicen adios ;)
        System.out.println("despedidas te doy ;) ");
        
        //fin o cierre
        scanner.close();
    }
}

