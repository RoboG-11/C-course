#include"Pila.h" //Se incluye el header

int main(){ //Función principal

    //Creamos tres pilas con la función crearPila
    Pila pilaUsuario = crearPila();
    Pila pilaMenor = crearPila();
    Pila pilaAuxiliar = crearPila();

    for(int i = 0; i < 3; i++){ //bucle para agregar valores en la pilaUsuario

        int valor; //Variable donde almacenará el valor

        printf("Escribe el valor [%d] de la pila: ", i);
        scanf("%d", &valor);
        printf("\n");
        
        fflush(stdin); //Se limpia el buffer de entrada

        push(&pilaUsuario, valor); //Se llama la función para agregar y se envía el valor
    }

    //Determinar ell valor menor de los datos ingresados por el usuario
    while(isEmpty(pilaUsuario) == 0){ //Condición para saber si se encuentra vacia
        push(&pilaMenor, pop(&pilaUsuario)); //
        while(isEmpty(pilaUsuario) == 0){
            if(top(pilaUsuario) > top(pilaMenor)){
                push(&pilaAuxiliar, pop(&pilaUsuario));
            }else{
                push(&pilaAuxiliar, pop(&pilaMenor));
                push(&pilaMenor, pop(&pilaUsuario));
            }
        }
    }

    printf("El valor menor de los ingresados es el: %d", pop(&pilaMenor)); //Se imprime resultado

    return 0; //Se termina el programa
}