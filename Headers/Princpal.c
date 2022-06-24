//Archivo tipo c
//Se ocupan APUNTADORES, ya que los valores estan en otro archivo

/*#include<stdio.h> //Incluimos la libreria de entrada y salida
 *#include"suma.h" //Se incluye el header de suma
 *#include"resta.h" //Se incluye el header de resta
 *#include"multiplicacion.h" //Se incluye el header de multiplicacion
 *#include"division.h" //Se incluye el header de division
 */

#include"funciones.h" //Se incluye el header de 'funciones'

int main(){ //Función principal
    int *p_a, *p_b, a, b; //Declaración de variables

    //Se solicitan y se guandan los datos
    printf("Ingresa el primer valor: ");
    scanf("%i", &a);
    printf("Ingresa el segundo valor: ");
    scanf("%i", &b);

    //Apuntador apunta al valor de la variable
    p_a = &a;
    p_b = &b;

    //Se llaman a laa funciones y se les envían los parametros
    int respuestaSuma = suma(p_a, p_b);
    int respuestaResta = resta(p_a, p_b);
    int respuestaMultiplicacion = multiplicacion(p_a, p_b);
    int respuestaDivision = division(p_a, p_b);

    //Impresión del valor que retorna
    printf("\nEl valor de la suma es: %i", respuestaSuma);
    printf("\nEl valor de la resta es: %i", respuestaResta);
    printf("\nEl valor de la multiplicacion es: %i", respuestaMultiplicacion);
    printf("\nEl valor de la division es: %i", respuestaDivision);

    return 0; //Se termina el programa
}