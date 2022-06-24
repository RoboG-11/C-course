#include<stdio.h> //Biblioteca de entrada y salida
#include<stdlib.h> //Biblioteca estandar

//Estrcutura de la Pila
typedef struct Pila{
    int tope;
    int lista[20];
}Pila;

//Declaración de funciones
Pila crearPila(); //Regresa una pila y crea una pila
int isEmpty(Pila); //Regresa un entero, verifica si está vacia y necesita la pila
void push(Pila*, int); //No regresa nada, ingresa un valor. Necesita la pila(*) y el valor
int pop(Pila*); //Regresa un entero, retira el elemento superior y necesesita la pila(*)
int top(Pila); //Regresa un entero, indica el último elemento(sin eliminar) y necesita la pila

//Funciones
Pila crearPila(){ //Crea la pila

    Pila p; //Variable de tipo Pila
    p.tope = 0; //El tope de la pila inicia en 0

    return p; //Se regresa la pila
}

int isEmpty(Pila p){ //Verifica si está vacia

    if(p.tope == 0){ //Condición para saber si está vacia
        return 1;
    }else{ //Lo contrario de la condición
        return 0;
    }
}

void push(Pila* p, int x){ //Ingresa un valor
    
    p->lista[p->tope] = x; //Accediendo a la lista, en el indice tope y ponemos el valor
    p->tope++; //Actualizamos el tope
}

int pop(Pila* p){ //Regresa y elimina el último valor

    if(isEmpty(*p) == 1){ //Condición para saber si está vacia o no
        printf("La Pila se encuentra vacia");
        return -1;
    }else{ //Lo contrario de a condición
        int aux = p->lista[p->tope-1]; //Actualizamos el valor del tope al ultimo valor
        p->tope--; //Regresamos el valor anterior del tope
        return aux; //Se regresa el último valor
    }
}

int top(Pila p){ //Regresa el último valor

    if(isEmpty(p) == 1){ //Condición para saber si está vacia o no
        printf("La Pila se encuentra vacia");
        return -1;
    }else{ //Lo contrario de a condición
        return p.lista[p.tope-1]; //Regresa el último elemento de la pila
    }
}