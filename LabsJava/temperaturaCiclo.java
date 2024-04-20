package LabsJava;

import java.util.Scanner;

public class temperaturaCiclo {
    public static void main(String[] args) 
    {
        // Declarando las variables
        double temperatura, promedio, contador = 0;
        
        // Crear un objeto Scanner para la entrada del usuario
        Scanner scanner = new Scanner(System.in);
        
        // Ciclo for para recoger las 12 temperaturas
        for (int i = 1; i <= 12; ++i) 
        {
            System.out.print("Ingrese la temperatura del mes " + i + ": ");
            temperatura = scanner.nextDouble();
            
            contador += temperatura; // Sumando la temperatura al acumulador
        }
        
        // Calculando el promedio
        promedio = contador / 12;
        
        // Mostrando el promedio
        System.out.println("El promedio de las temperaturas es: " + promedio);
        
        // Cerrar el Scanner para evitar fugas de recursos
        scanner.close();
    }
}
