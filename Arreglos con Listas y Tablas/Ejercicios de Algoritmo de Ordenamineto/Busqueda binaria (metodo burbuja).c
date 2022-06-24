/*
Busqueda binaria (metodo burbuja)
Sirve para buscar algo. Busca de uno en uno y sí importa el orden

Hacer un array de 10 numeros desordenados, luego ordenarlos por el metodo burbuja
luego pedir un dato a buscar y utilizar la busqueda binaria para saber si existe
*/
#include <stdio.h> //Libreria de entrada y salida

int main(){ //Funcion principal

    int array[10] = {1,3,5,7,9,2,4,6,8,10}; //Declaracion e inicializacion del array
    int i,j,aux,dato,inf,sup,mitad; //Declaracion de variables
    char band = 'F'; //Declaracion de variable booleana

    //Metodo burbuja
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

	//Impresion del array con orden
    for (i = 0; i < 10; i++){ //Ciclo que recorre todo el array
        printf("%i, ", array[i]); //Impresion de valor por valor
    }

    printf("\n\nEscribe un numero: "); //Solicitud de dato
    scanf("%i", &dato); //Escaneo y guardado de lo ingresado

    //Busqueda Binaria
    inf = 0; //Inicializacion de variable
    sup = 10; //Inicializacion de variable

    while (inf <= sup){ //Ciclo con condicion
        mitad = (inf+sup)/2; //Operacion de asignacion

        if (array[mitad] == dato){ //Condicion 
            band = 'V'; //Cambio de valor booleano
            break; //Se termina la condicion
        }
        
        if (array[mitad] > dato){ //Condicion
            sup = mitad; //Asignacion
            mitad = (inf+sup)/2; //Operacion de asignacion
        }
        
        if (array[mitad] < dato){ //Condicion
            inf = mitad; //Asignacion
            mitad = (inf+sup)/2; //Operacion de asignacion
        }
        
    }

    if (band == 'F'){ //Condicion booleana
            printf("\nEl numero no existe"); //Impresion de la condicion
        }else if (band == 'V'){ //Condicion booleana
            printf("\nEl numero existe en la posicion %i",mitad); //Impresion de la condicion
        }
    
    return 0; //Se termina el programa
}
