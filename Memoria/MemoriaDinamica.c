/*
 *La memoria dinamica se maneja con los espacios que ya se encuentran libres en nuestra memoria interna, tiene la 
 *caracteristica que no se puede liberar en tiempo de ejecucución. Mientras que la memoria dinamina sí se puede
 *liberar en tiempo de ejecución, aquí se ocupa el 'casteo' esto forza a un tipo de dato a que se comporte como
 *otro tipo de dato, esto con la ayuda de malloc. Se ocupan los apuntadores ya que la memoria dinamica no es 
 *consecutiva.
 *
 *MALLOC
 *formato -> (tipoDato*)malloc(memoriaRequeridaEnBytes);
 *devuelve -> Un apuntador al primer byte de la memoria entregada o NULL
 */

#include<stdio.h> //Libreria de entrada y salida
#define SIZE 10000 //Se declara una macro


int main(){ //Función principal

    int* myInteger; //Declaración del apuntador

    myInteger = (int*)malloc(4); //La variable se iguala a la memoria dinamica con malloc se castea al pointer

    if(myInteger != NULL){ //Comprobar si se dispone con la memoria disponible
        printf("\nLa memoria se ha otorgado\n\n");
    }else{ //De lo contario
        printf("\nError al adquirir la memoria\n\n");
    }

    free(myInteger); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa
}


/*
int main(){ //Función principal
    
    int* array; //Declaración del apuntador

    array = (int*)malloc(4 * 8); //La variable (array) se iguala a la memoria dinamica con malloc se castea al pointer

    if(array != NULL){ //Comprobar si se dispone con la memoria disponible
        printf("La memoria se ha otorgado");
    }else{ //De lo contario
        printf("Error al adquirir la memoria");
    }

    free(array); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}
*/

/*
int main(){ //Funcion principal con mucha memoria dinamica
    
    int* myArray; //Declaración del apuntador

    //Manera "correcta" de ocupar malloc con un array
    myArray = (int*)malloc(sizeof(int) * SIZE); //La variable (array) se iguala a la memoria dinamica con malloc se castea al pointer

    if(myArray == NULL){ //Comprobar si se dispone con la memoria disponible
        printf("Se ha alcanzado el limite de la memoria");
    }
    free(myArray); //Se libera la memoria pase lo que pase

    return 0; //Se termina el programa

}
*/