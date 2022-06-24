//Brian Rivera Martinez - 2193036861
/*
 *Un palíndromo es una frase que al leerla de derecha a izquierda y de izquierda a 
 *derecha dicen lo mismo como, por ejemplo: “Anita lava la tina”, “A mi loca Colima”, 
 *“A ti no bonita”, entre otros. Mediante el uso de pilas dinámicas en lenguaje C, 
 *realiza un programa en el cual se le pida al usuario ingresar una frase, en este caso 
 *un palíndromo, una vez capturada la oración que el usuario ingreso el programa verificará 
 *si efectivamente la cadena ingresada es un palíndromo o no. La salida mostrará el mensaje 
 *siguiente de acuerdo con lo ingresado por el usuario. “La frase: “SENTENCIA INGRESADA 
 *POR EL USUARIO” si es un palíndromo.” O “La frase: “SENTENCIA INGRESADA POR EL USUARIO” 
 *no es un palíndromo.” Una vez mostrado el resultado el programa dará la opción al usuario 
 *de comprobar una nueva oración o de terminar el programa y salir. En caso de que el usuario 
 *decida salir el programa mostrará un mensaje de despedida personalizado y terminará.
 */

//Bibliotecas a utilizar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Palabra{
    int index;
    char string[20];
}Palabra;

typedef struct Nodo{
    Palabra palabra;
    struct Nodo *next;
}Nodo;

char* stack;
//Declaracion de las funciones
Nodo* push(Nodo *nodo, char string[]);
Nodo* pop(Nodo *topStack);
Nodo* emptyStack(Nodo *stack);
void printStack(Nodo *stack);
void vaciar(Nodo *pila);

//Funciones

void Palindromo(char palabra1[20]){
    char palabra2[20];

    strcpy(palabra2, palabra1); //Se copia el contenido de palabra1 a palabra2
    
    strrev(palabra2); //Invierte la palabra

    if(strcmp(palabra1, palabra2) == 0){ //Condion de si palabra1 y palabra2 son iguales
        printf("SENTENCIA INGRESADA POR EL USUARIO, si es un palindromo");
    }else{ //De lo contrario
        printf("SENTENCIA INGRESADA POR EL USUARIO, no es un palindromo");
    }
}

int main(){
    int opcion;
    char palabra1[20];

    do{
        printf("\n\nPograma para saber si una frase es palindomo\n");
        printf("1. Ingresar palabra\n");
        printf("2. Salir\n");
        printf("\nIngrese el numero de la opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: 
                //funcion
                printf("Ingrese la frase: ");
                scanf("%*c%[^\n]", palabra1);
                Palindromo(palabra1);
                break;
            
            case 2: 
                printf("\nGracias por usa el programa :)\n");
                break;
            default:
                printf("\nOpcion no valida");
                printf(". Vuelva a intentarlo");
                break;
        }
    }while(opcion != 2);


    return 0;
}