/*
Instrucciones Práctica 2:
1. Realiza una investigación (breve) sobre listas enlazadas simples y dobles ,
incluye las ventajas que presentan cada una (mínimo 3), así como desventajas.
La longitud mínima de la investigación debe ser de 1 hoja y media, se deben
incluir al menos 3 fuentes distintas de información, deben estar citadas en
formato APA, se evaluará ortografía y redacción.
2. Se tiene un estructura ALUMNOS, que contiene información de alumnos de
una escuela, estos datos son los siguientes:
• Nombre del alumno.
• Edad.
• Matrícula.
• Licenciatura.
• División Académica.
Se requiere realizar un lista simple dinámica en lenguaje C, donde se almacene
a cada uno de los alumnos del archivo: alumnos.txt
3. El departamento de Matemáticas aplicadas y sistemas, desea verificar que
todos los alumnos se encuentren en la lista, por lo tanto, nos solicita emplear
una función donde se impriman todos los datos de cada alumnos, usted
deberá de emplear esta función y la salida deberá verse reflejada en un archivo
llamado: salida.txt
4. El departamento también solicita que los alumnos que tengan una edad menor
a 23 años, sean eliminados de la lista principal y que sean traspasados a una
lista llamada Listamenores, Usted deberá realizar esta eliminación y deberá
mostrar la información contenida en Listamenores en un archivo llamado:
Menores.txt
*/

/**
 * @file main.c
 * @authors Brian Rivera Martinez 2193036861, Víctor Saúl García Godoy 2183042802
 * Basado en los ejemplos de la profesora Areli Rojo
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructuras
typedef struct Alumnos {
    char nombre[30];
    int edad;
    unsigned int matricula;
    char licenciatura[30];
    char division[30];
}Alumnos;

typedef struct Nodo{
    Alumnos *datos;
    struct Nodo *sig;
}Nodo;

typedef struct ListaS{
    Nodo *cabeza;
    //Nodo *cola;
}ListaS;

//Declaración de funciones
Alumnos* crear_Alumno(char nombre[30], int edad, unsigned int matricula, char licenciatura[30], char division[30]);
Nodo *crear_Nodo(Alumnos *alumno);
ListaS *crear_ListaS();
int isEmpty(ListaS lista);
void insertar_cabeza(ListaS *lista, Nodo *aux);
void insertar_cola(ListaS *lista, Nodo *aux);
void insertar_enmedio(ListaS *lista, Nodo *anterior,Nodo *elemento);
void quitar_cabeza(ListaS *lista);
void quitar_cola(ListaS *lista);
void quitar_enmedio(ListaS *lista, Nodo *elemento);
Nodo* buscaElemento(ListaS *lista, Nodo *elemento);
void vaciarLista(ListaS *lista);
void printLista(ListaS *lista);
int cantidad_nodos(ListaS *lista);
ListaS *buscarAlumMenor( ListaS *lista );

//Funciones
Alumnos* crear_Alumno(char nombre[30], int edad, unsigned int matricula, char licenciatura[30], char division[30]){
    Alumnos *aux=(Alumnos*)malloc(sizeof(Alumnos));

    strcpy( aux->nombre, nombre );
    aux->edad = edad;
    aux->matricula = matricula;
    strcpy( aux->licenciatura, licenciatura );
    strcpy( aux->division, division );

    return( aux );
}

Nodo *crear_Nodo( Alumnos *alumnos ){
    Nodo *aux = ( Nodo* )malloc( sizeof( Nodo ) );

    aux->datos = alumnos;
    aux->sig = NULL;

    return( aux );
}

ListaS *crear_ListaS(){
    ListaS *aux = ( ListaS* )malloc( sizeof( ListaS ) );

    aux->cabeza = NULL;

    return( aux );
}

int isEmpty( ListaS lista ){
    if( lista.cabeza == NULL ){
        //printf("\nLista Vacia funcion isEmpty\n");
        return( 1 );
    }
    else{
        //printf("\nLa Lista No Esta Vacia funcion isEmpty \n");
        return (0);
    }
}

void insertar_cabeza(ListaS *lista, Nodo *aux ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = aux;
    }
    else{
        aux->sig = lista->cabeza;
        lista->cabeza = aux;
    }
}

void insertar_cola( ListaS *lista, Nodo *aux ){
    Nodo *cola;
    cola = lista->cabeza;

    if( isEmpty( *lista ) == 1 ){
        insertar_cabeza( lista,aux );
    }
    else{
        while( cola->sig != NULL ){
        cola = cola->sig;
        }
        cola->sig = aux;
        cola = aux;
    }
}

void insertar_enmedio( ListaS *lista, Nodo *anterior,Nodo *elemento ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = elemento;
    }
    else{
        elemento->sig = anterior->sig;
        anterior->sig = elemento;
    }
}

void quitar_cabeza( ListaS *lista ){
    Nodo *aux = NULL;

    if( !isEmpty( *lista ) ){
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        free( aux );
        }
    else{
        //printf("\nLa lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }
}

void quitar_cola( ListaS *lista ){
    Nodo *cola;
    Nodo * anterior;
    
    if( isEmpty( *lista ) == 1 ){
        //printf("\nLa pila esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else{
        if( lista->cabeza->sig == NULL ){
        lista->cabeza = NULL;
        //printf("\nMemoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else{
        cola = lista->cabeza;
        while( cola->sig != NULL ){
            anterior = cola;
            cola = cola->sig;
        }
        anterior->sig = NULL;
        free( cola );
        }
    }
}

void quitar_enmedio( ListaS *lista, Nodo *elemento ){
    Nodo *anterior;
    Nodo *borrar;

    if( isEmpty( *lista ) == 1 ){
        //printf("\nLa pila esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar = buscaElemento( lista, elemento );//pendiente
        if( lista->cabeza == borrar ){
        quitar_cabeza( lista );
        }
        else{
            anterior = lista->cabeza;
            while( anterior->sig != borrar ){
            anterior = anterior->sig;
        }
        anterior->sig = borrar->sig;
        free( borrar );
        //printf("\nid = %d", anterior->datos->id);
        }
    }
}

Nodo* buscaElemento( ListaS *lista, Nodo *elemento ){
    Nodo* aux = lista->cabeza;
    Alumnos *alu;
    if( !isEmpty( *lista ) ){
        //while(aux->datos->id != ID)

        while(aux->datos->matricula != elemento->datos->matricula){
            if( aux->sig != NULL ){
                aux=aux->sig;
            }
            else{
                printf( "\nLa matricula = %lf no se encuentra en la lista\n",elemento->datos->matricula ); 
                aux=NULL;
                return( aux );
                break;
            }
            
        }

        if( aux->datos->matricula == elemento->datos->matricula ){
            printf( "\nla matricula = %lf si esta en la lista\n",elemento->datos->matricula );
            return(aux);
        }

    }
    else{
        //printf("\nEL ELEMENTO NO SE ENCUENTRA LA LISTA NO TIENE NADA \n");
        return( NULL );
    }
}

void vaciarLista( ListaS *lista ){
    Nodo *aux = lista->cabeza;
    if( isEmpty( *lista ) != 1 ){
        while( aux != NULL ){
            aux=aux->sig;
            quitar_cabeza( lista );
        }
    }
    else{
        //printf("\nLISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    free( aux );
}


int cantidad_nodos( ListaS* lista ){
    int cantidad = {0};
    if( lista->cabeza == NULL ) return 0;
    Nodo* iterador = lista->cabeza; 
    while( iterador != NULL ){
        cantidad++;
        iterador = iterador->sig;
    }
    return cantidad;
}


// prototype of "buscarAlumMenor"
ListaS *buscarAlumMenor ( ListaS *lista ) {

    if ( isEmpty( *lista ) == 1) {
        return NULL;
    }

    ListaS *menores = crear_ListaS();
    Nodo *mov = lista->cabeza;
    Nodo *aux = mov;
    while ( mov->sig != NULL ) {

        if ( mov->datos->edad < 23 ) {

            mov = mov->sig;
            lista->cabeza = mov;
            aux->sig = NULL;

            if ( isEmpty( *menores ) == 1) {
                insertar_cabeza( menores, aux );

            } else {
                insertar_cola( menores, aux );
            }
        } else{

            mov = mov->sig;
        }

    }

    if ( aux->datos->edad < 23 ) {
        insertar_cola(menores, aux);
    }


    return menores;

}


// prototype of printList
void printLista(ListaS *lista){
    Nodo *aux = lista->cabeza;
    Alumnos *alu;
    if(isEmpty(*lista)!=1) {
        while(aux!=NULL){
            alu = aux->datos;
            printf("\n Edad es: %d, ", alu->edad);
            printf("\n Nombre es: %s, ", alu->nombre);
            printf("\n Matricula : %lu,", alu->matricula);
            printf("\n Licenciatira : %s,", alu->licenciatura);
            printf("\n Division : %s,\n", alu->division);
            aux=aux->sig;
        }
    }
    else{
        printf("\n LISTA SIN NADA \n");
    }
}


//main Function

int main () {

    ListaS *alumnos = crear_ListaS();
    Nodo *saul = crear_Nodo( crear_Alumno( "Saul", 21, 2183042802, "Computacion", "CNI" ) );
    Nodo *brian = crear_Nodo( crear_Alumno("Brian", 20, 2193036861, "Computacion", "CNI") );
    Nodo *alberto = crear_Nodo( crear_Alumno( "Alberto", 24, 2203456798, "Computacion", "CNI" ) );


    insertar_cabeza( alumnos, saul );
    insertar_cola( alumnos, brian );
    insertar_enmedio( alumnos, saul , alberto);

    ListaS *menores = buscarAlumMenor( alumnos );


    printLista( alumnos );
    printf( "\nImprimiendo la lista de los alumnos menores: \n" );
    //printLista( menores );
    vaciarLista( alumnos );
    //vaciarLista( menores );
    // free( saul );
    // free( brian );
    // free( alberto );
    free( alumnos );


    return 0;
}