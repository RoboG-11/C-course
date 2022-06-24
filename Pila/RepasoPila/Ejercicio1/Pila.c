#include "Pila.h" //Se incluye la libreria de Pila.h

int main(){

    Pila newPila = crearPila(); //Se crea la pila y se encunetra en 'newPila'
    push(&newPila, 10); //Se llama a push y se le envia el valor para ingresarlo en la pila

    printf("El valor del tope es: %d\n", newPila.tope);
    printf("El valor dentro del tope es: %d\n", newPila.lista[newPila.tope-1]);

    push(&newPila, 11); //Se llama a push y se le envia el valor para ingresarlo en la pila
    push(&newPila, 12); //Se llama a push y se le envia el valor para ingresarlo en la pila
    push(&newPila, 13); //Se llama a push y se le envia el valor para ingresarlo en la pila
    push(&newPila, 14); //Se llama a push y se le envia el valor para ingresarlo en la pila

    printf("\nEl valor del tope es: %d\n", newPila.tope);
    printf("El valor dentro del tope es: %d\n", tope(newPila));

    int valor = pop(&newPila); //Se llama a pop para eliminar un elemento de la pila
    printf("\nEl valor del tope es: %d\n", newPila.tope);
    printf("El valor dentro del tope es: %d\n", tope(newPila));

    //Vaciamos la pila con la función pop
    pop(&newPila); //Se llama a pop para eliminar un elemento de la pila
    pop(&newPila); //Se llama a pop para eliminar un elemento de la pila
    pop(&newPila); //Se llama a pop para eliminar un elemento de la pila
    pop(&newPila); //Se llama a pop para eliminar un elemento de la pila
    pop(&newPila); //Se llama a pop para eliminar un elemento de la pila

    return 0;
}