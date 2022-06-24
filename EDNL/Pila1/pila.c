/* pila.c: contiene las funciones */

typedef int TipoDato;

#include<pila.h>
#include<stdio.h>
#include<stdlib.h>

//prototipos o cabeceras

void newPila ( Pila *pila ) {

    pila->cima=-1; // el apuntador debe estar al final de la pila

}

void push ( Pila *pila , TipoDato elemento ) {

    if ( isFull( *pila ) ) {
        printf("\n  Desbordamiento de pila (StackOverFlow) \n");
        exit( 1 ); //exit termina el programa
    }
    else {
        pila->cima++;
        pila->listaPila[pila->cima] = elemento;
        // estamos entrando a la estructura de pila, al arreglo listaPila en la posición de la cima, y se guarda el elemento introducido.
    }

}

TipoDato pop( Pila *pila ){

    TipoDato elemento;
    if ( isEmpty( *pila ) ){

        printf("\n  La pila esta vacia, no es posible eliminar \n");
        exit(1); //exit termina el programa

    }
    else {

        elemento = pila->listaPila[pila->cima];
        printf("\n elemento eliminado es: %d", elemento);
        pila->cima--; // muevo el apuntador del ultimo elemento para que no se tenga acceso a el.
        return( elemento );

    }

}


int isEmpty( Pila pila ){ // le paso el valor, no el apuntador a la memoria

    if ( pila.cima == -1 ) {

        printf("\n La pila esta vacia :0\n");
        return 1;

    } else {

        printf("\nLa pila no esta vacia");
        return 0;

    }

}

int isFull( Pila pila ){ // le paso el valor, no el apuntador a la memoria

    if ( pila.cima == TAMPILA-1 ) {

        printf("\n La pila esta llena\n");
        return 1;

    } else {

        printf("\nLa pila no esta llena");
        return 0;

    }

}


TipoDato cima( Pila pila ){

    if ( isEmpty( pila ) ){

        printf("\n  Error de ejecucion, pila vacia \n");
        return;

    }
    else {

        printf("\nEl elemento de la cima es: %d", pila.listaPila[pila.cima] );
        return( pila.listaPila[pila.cima] );

    }

}


int count ( Pila pila ) {

    int len;
    if ( isEmpty( pila ) ) {
        printf( "\n Error de ejecucion, pila vacia" );
        return 0;
    }
    else {
        
        printf("\n la pila tiene %d elementos\n", pila.cima+1);
        return ( pila.cima + 1 );

    }

}

void clear( Pila *pila){

    pila->cima = -1;
    printf("\n pila limpiada correctamente =)");

}

int lenMax(){

    printf("\n Esta pila almacena un maximo de %d elementos", TAMPILA);
    return( TAMPILA );

}

void printStack( Pila pila ){

    for ( int i = pila.cima ; i > -1 ; i-- ) {
        printf(" \n el elemento es:  %d", pila.listaPila[i]);
    }
}


// void typeData ( Pila pila ) {

//     printf("\n el tipo de dato es: %d");

// }