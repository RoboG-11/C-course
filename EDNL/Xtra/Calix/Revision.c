/** Estructura de Datos Lineales
 * @file Práctica 2. main.c
 * @authors Brian Rivera Martinez 2193036861, Víctor Saúl García Godoy 2183042802
 * 
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
/**
 * @brief Crea un alumno.
 * 
 * @param nombre 
 * @param edad 
 * @param matricula 
 * @param licenciatura 
 * @param division 
 * @return Alumnos* 
 */
Alumnos* crear_Alumno(char nombre[30], int edad, unsigned int matricula, char licenciatura[30], char division[30]);

/**
 * @brief Crea un nodo.
 * 
 * @param alumno 
 * @return Nodo* 
 */
Nodo *crear_Nodo(Alumnos *alumno);

/**
 * @brief Crea una estructura tipo lista.
 * 
 * @return ListaS* 
 */
ListaS *crear_ListaS();

/**
 * @brief Verifica si la lista esta vacia.
 * 
 * @param lista 
 * @return int 
 */
int isEmpty(ListaS lista);

/**
 * @brief Inserta un nodo en la cabeza de la lista.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cabeza(ListaS *lista, Nodo *aux);

/**
 * @brief Inserta nodo en la cola de la lista.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cola(ListaS *lista, Nodo *aux);

/**
 * @brief Inserta en medio de la lista.
 * 
 * @param lista 
 * @param anterior 
 * @param elemento 
 */
void insertar_enmedio(ListaS *lista, Nodo *anterior,Nodo *elemento);

/**
 * @brief Elimina la cabeza de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cabeza(ListaS *lista);

/**
 * @brief Elimina la cola de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cola(ListaS *lista);

/**
 * @brief Elimina un nodo de en medio de la lista.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *quitar_enmedio(ListaS *lista, Nodo *elemento);

/**
 * @brief Busca un elemento de una lista.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo* buscaElemento(ListaS *lista, Nodo *elemento);

/**
 * @brief Vacia una lista.
 * 
 * @param lista 
 */
void vaciarLista(ListaS *lista);

/**
 * @brief Imprime la lista en consola.
 * 
 * @param lista 
 */
void printLista(ListaS *lista);

/**
 * @brief Permite encontrar los alumnos menores que 23 años.
 * 
 * @param lista 
 * @return ListaS* 
 */
ListaS *buscarAlumMenor( ListaS *lista );

/**
 * @brief Imprime una lista en un archivo de texto.
 * 
 * @param lista 
 * @param alumnos 
 */
void printListaArchivo(ListaS *lista, char alumnos[20]);

/**
 * @brief Lee por consola los datos correspondientes a los nodos de una lista
 * 
 * @param lista 
 */
void listaConsola(ListaS *lista);



// Funciones
/**
 * @brief Crea un alumno.
 *
 * @param nombre
 * @param edad
 * @param matricula
 * @param licenciatura
 * @param division
 * @return Alumnos*
 */
Alumnos *crear_Alumno(char nombre[30], int edad, unsigned int matricula, char licenciatura[30], char division[30]) {
    Alumnos *aux=(Alumnos*)malloc(sizeof(Alumnos));

    strcpy( aux->nombre, nombre );
    aux->edad = edad;
    aux->matricula = matricula;
    strcpy( aux->licenciatura, licenciatura );
    strcpy( aux->division, division );

    return( aux );
}

/**
 * @brief Crea una estructura de tipo alumno.
 * 
 * @param alumnos 
 * @return Nodo* 
 */
Nodo *crear_Nodo( Alumnos *alumnos ){
    Nodo *aux = ( Nodo* )malloc( sizeof( Nodo ) );

    aux->datos = alumnos;
    aux->sig = NULL;

    return( aux );
}

/**
 * @brief Crea una lista.
 * 
 * @return ListaS* 
 */
ListaS *crear_ListaS(){
    ListaS *aux = ( ListaS* )malloc( sizeof( ListaS ) );

    aux->cabeza = NULL;

    return( aux );
}

/**
 * @brief Verifica si una lista está vacia.
 * 
 * @param lista 
 * @return int 
 */
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

/**
 * @brief Inserta un nodo en la cabeza de una lista.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cabeza(ListaS *lista, Nodo *aux ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = aux;
    }
    else{
        aux->sig = lista->cabeza;
        lista->cabeza = aux;
    }
}

/**
 * @brief Inserta un nodo en la cola de una lista.
 * 
 * @param lista 
 * @param aux 
 */
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

/**
 * @brief Inserta un nodo en medio de una lista.
 * 
 * @param lista 
 * @param anterior 
 * @param elemento 
 */
void insertar_enmedio( ListaS *lista, Nodo *anterior,Nodo *elemento ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = elemento;
    }
    else{
        elemento->sig = anterior->sig;
        anterior->sig = elemento;
    }
}

/**
 * @brief Quita el nodo que está en la cabeza de una lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cabeza( ListaS *lista ){
    Nodo *aux = NULL;

    if( !isEmpty( *lista ) ){
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        aux->sig = NULL;
        return aux;
        }

}

/**
 * @brief Quita el último nodo de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cola( ListaS *lista ){
    Nodo *cola;
    Nodo * anterior;
    
    if( isEmpty( *lista ) == 1 ){
        //printf("\nLa pila esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else{
        if( lista->cabeza->sig == NULL ){
        cola = lista->cabeza;
        lista->cabeza = NULL;
        return cola;
        //printf("\nMemoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else{
        cola = lista->cabeza;
        while( cola->sig != NULL ){
            anterior = cola;
            cola = cola->sig;
        }
        anterior->sig = NULL;
        cola->sig = NULL;
        return cola;
        }
    }
}

/**
 * @brief Quita un nodo que está entre dos elementos de la lista.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *quitar_enmedio( ListaS *lista, Nodo *elemento ){
    Nodo *anterior;
    Nodo *borrar;

    if( isEmpty( *lista ) == 1 ){
        //printf("\nLa pila esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar = buscaElemento( lista, elemento );//pendiente
        if( lista->cabeza == borrar ){
            return quitar_cabeza( lista );
        }
        else{
            anterior = lista->cabeza;
            while( anterior->sig != borrar ){
            anterior = anterior->sig;
            }
            anterior->sig = borrar->sig;
            borrar->sig = NULL;
            return borrar;
        }
    }
}

/**
 * @brief Busca un elemento en una lista.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
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
                printf( "\nLa matricula = %lu no se encuentra en la lista\n",elemento->datos->matricula ); 
                aux=NULL;
                return( aux );
                break;
            }
            
        }

        if( aux->datos->matricula == elemento->datos->matricula ){
            printf( "\nla matricula = %lu si esta en la lista\n",elemento->datos->matricula );
            return(aux);
        }

    }
    else{
        //printf("\nEL ELEMENTO NO SE ENCUENTRA LA LISTA NO TIENE NADA \n");
        return( NULL );
    }
}

/**
 * @brief Vacia una lista, dejandola sin elementos.
 * 
 * @param lista 
 */
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

/**
 * @brief Busca los alumnos menores de 23 años en una lista. Los elementos
 * cuya edad es menor de 23 son removidos de la lista original 
 * y son agregados en la lista menores.
 * @param lista 
 * @return ListaS* 
 */
ListaS *buscarAlumMenor ( ListaS *lista ) {
    Nodo *aux = lista->cabeza;
    Nodo *aux2, *recorre;
    ListaS *menores = crear_ListaS(); // Se crea una nueva lista
    while ( aux->sig != NULL ) {
        if ( aux->datos->edad < 23 ) {
            if ( lista->cabeza == aux ) { //Caso 1. El elemento a mover es la cabeza de la lista.
                aux = aux->sig;
                aux2 = quitar_cabeza( lista );
                if ( isEmpty( *menores ) == 1) {
                    insertar_cabeza( menores, aux2 );
                } else {
                    insertar_cola( menores, aux2 );
                }
            } else if ( aux->sig == NULL ) { //Caso 2. El elemento a mover es cola de la lista.
                aux2 = quitar_cola( lista );
                insertar_cola( menores, aux2 );
                return menores;
            } else { 
                    if ( aux->datos->edad < 23) { //Caso 3. El elemento a mover está en medio.
                        recorre = aux;
                        aux = aux->sig;
                        aux2 = quitar_enmedio(lista, recorre);
                        insertar_cola(menores, aux2);
                    }
            }
        } else {
            aux = aux->sig;
        }
    }

    if ( aux->datos->edad < 23) { // Verifica si el último elemento de la lista es menor a 23 años.
        aux2 = quitar_cola(lista);
        insertar_cola(menores, aux2);
    }
    return menores; // Regresa la nueva lista que contiene a los alumnos menores.
}

/**
 * @brief Imprime una lista en consola.
 * 
 * @param lista 
 */
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

/**
 * @brief Guarda los datos de los alumnos en una lista por medio de la consola.
 * 
 * @param lista 
 */
void listaConsola( ListaS *lista ) {
    int count = 0;
    if ( isEmpty( *lista ) == 1 ) {

        inicio:
        printf( "Ingresar la cantidad de alumnos a registrar: " );
        scanf( "%d", &count );

        if ( count <= 0 ) {
            printf( "\nEl numero minimo de alumnos debe ser uno, intende de nuevo\n" );
            goto inicio;
        }

        Nodo *aux;
        char nombre[30];
        int edad;
        unsigned int matricula;
        char licenciatura[30];
        char division[30];

        for ( int i = 0; i < count; i++ ) {
            
            printf("Nombre de alumno %d : " , (i +1));
            scanf("%s", &nombre);
            printf("Edad de alumno %d : ", (i + 1));
            scanf("%d", &edad);
            printf("Matricula de alumno %d : ", (i + 1));
            scanf("%lu", &matricula);
            printf("Licenciatura de alumno %d : ", (i + 1));
            scanf("%s", &licenciatura);
            printf("Division de alumno %d : ", (i + 1));
            scanf("%s", &division);
            printf( "\n" );
            
            if ( isEmpty( *lista ) ) {
                insertar_cabeza( lista ,crear_Nodo( crear_Alumno( nombre, edad, 
                matricula,licenciatura, division ) ) );
            } else {
                insertar_cola(lista, crear_Nodo(crear_Alumno(nombre, edad,
                matricula, licenciatura, division)));
            }
        }
    }
}

/**
 * @brief Crea un archivo de texto con los datos de una lista.
 * 
 * @param lista // lista de la cual se imprimirán los datos.
 * @param alumnos //nombre del archivo
 */
void printListaArchivo(ListaS *lista, char alumnos[20]){
    Nodo *aux = lista->cabeza;
    Alumnos *alu;
    Nodo *cabeza;
    FILE *archivo = fopen(alumnos, "w+");
    int cnt = 1;

    if(archivo == NULL){ 
        printf("Error al tratar de localizar el archivo");
        return ;
    }

    if(isEmpty(*lista)!=1) {
        while(aux!=NULL){
            alu = aux->datos;
            fprintf(archivo, "Los datos del alumno %i son...\n", cnt);
            fprintf(archivo, "Nombre: %s\n", aux->datos->nombre);
            fprintf(archivo, "Edad: %i\n", aux->datos->edad);
            fprintf(archivo, "Matricula: %lu\n", aux->datos->matricula);
            fprintf(archivo, "Licenciatura: %s\n", aux->datos->licenciatura);
            fprintf(archivo, "Division: %s\n", aux->datos->division);
            fprintf(archivo, "\n");
            aux=aux->sig;
            cnt++;
        }
    }
    else{
        printf("\n LISTA SIN NADA \n");
    }
    fclose(archivo);
}



//funcion main
int main () {

    ListaS *alumnos = crear_ListaS(); // Crea una lista.
    listaConsola( alumnos ); // Pide los datos de los alumnos al usuario.

    printListaArchivo( alumnos, "alumnos.txt" ); // Imprime la lista principal.

    ListaS *menores = buscarAlumMenor(alumnos); // Separa los alumnos menores de 23 años.

    printListaArchivo(alumnos, "salida.txt"); // Imprime la lista de alumnos actualizada.
    printListaArchivo( menores, "Menores.txt" ); // Imprime los alumnos menores que 23 años.

    printf("\nImprimiendo la lista de alumnos mayores de 23: \n");
    printLista( alumnos );
    printf( "\nImprimiendo la lista de los alumnos menores de 23: \n" );
    printLista( menores );
    vaciarLista( alumnos );
    vaciarLista( menores );
    free( alumnos );


    return 0;
}