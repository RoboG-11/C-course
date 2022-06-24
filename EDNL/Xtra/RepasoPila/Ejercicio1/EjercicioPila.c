//Programa que indica cual es el menor de los numeros ingresados en la pila
#include "Pila.h"

int main(){

    //Se crean tres pilas a utilizar
    Pila pilaUsuario = crearPila();
    Pila pilaMenor = crearPila();
    Pila pilaAuxiliar = crearPila();

    //Bucle para ingresar los valores a la pila 'pilaUsuario'
    for(int i = 0; i < 3; i++){
        int valor;
        printf("Escribe el valor [%d] de la pila: ", i);
        scanf("%d", &valor);
        fflush(stdin);
        push(&pilaUsuario, valor);
    }

    //Determinar el menor de los datos ingresado por el usuario
    while(isEmpty(pilaUsuario) == 0){ //Mientras la pila no se encuentre vacia
        push(&pilaMenor, pop(&pilaUsuario)); //Agregamos a la pila menor el pop del usuario
        while(isEmpty(pilaUsuario) == 0){ //Mientras la pila no se encuentre vacia
            if(tope(pilaUsuario) > tope(pilaMenor)){ //Comparacion entre los topes de pila
                push(&pilaAuxiliar, pop(&pilaUsuario)); //Agregamos a la pila auxiliar el pop del usuario
            }else{ //Lo contario del if
                push(&pilaAuxiliar, pop(&pilaMenor)); //Agregamos a la pila auxiliar el pop de la menor
                push(&pilaMenor, pop(&pilaUsuario)); //Agregamos a la pila menor el pop del usuario
            }
        }
    }

    //Impresión del resultado
    printf("\nEl valor menor de los elementos ingresados es: %d", pop(&pilaMenor));
    
    return 0;
}