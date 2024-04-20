using System;

class Program
{
    static void Main()
    {
        // Declaración de variables
        double temperatura, promedio, contador = 0;
        
        // usar un ciclo para reunir las 12 temperaturas
        for (int i = 1; i <= 12; ++i)
        {
            Console.Write("Ingrese la temperatura del mes " + i + ": ");
            temperatura = Convert.ToDouble(Console.ReadLine());
            
            // Sumar la temperatura al contador
            contador += temperatura; 
        }
        
        // Proceso para obtener el promedio
        promedio = contador / 12;
        
        // Resultado
        Console.WriteLine("El promedio de las temperaturas es: " + promedio);
    }
}