//Se incluyen las bibliotecas a utilizar
#include<stdio.h>
#include<stdlib.h>

//Estructura de la pila
typedef struct Pila{
    int tope;
    int lista[50];

}Pila;

//Prototipo de las funciones
Pila crearPila(); //Función que crea la pila
int isEmpty(Pila); //Función que revisa si la pila se encuentra vacia
void push(Pila*, int); //Función que ingresa un valor en el tope de la pila
int pop(Pila*); //Función que retira el elemento superior de la pila
int tope(Pila); //Función que indica cual es el elemnto que se encuentra en el tope sin eliminar

//Funciones de la pila
Pila crearPila(){
    Pila p; //Se crea la pila 
    p.tope = 0; //Se inicializa el tope en 0
    return p; //Se regresa la pila creada
}

int isEmpty(Pila p){
    if(p.tope == 0){ //Condicion para saber si la pila se encuentra vacia
        return 1; //Pila Vacia
    }else{ //Lo contrario de la condicion
        return 0; //Pila llena
    }
}

void push(Pila* p, int x){
    p->lista[p->tope] = x; //Accedemos al tope de la pila e inegrsamos el valor
    p->tope++; //Se actualiza el valor del tope para NO sobrescribir
}

int pop(Pila* p){
    if(isEmpty(*p) == 1){ //Función para saber si se encuentra vacia para poder trabajar
        printf("\nLa pila se encuentra vacia");
        return -1;
    }else{ //Lo contrario de la condición
        int aux = p->lista[p->tope-1]; //Se actualiza el valor del tope para sacar el valor
        p->tope--; //Se actualiza el valor del tope para estra en funcionalidad
        return aux;
    }
}

int tope(Pila p){
    if(isEmpty(p) == 1){ //Condicion para saber si la pila se encuentra vacia
        printf("La pila se encuentra vacia");
        return -1;
    }else{ //Lo contrario de la condición
        return p.lista[p.tope-1]; //Se regresa el tope de la pila sin eliminar
    }
}