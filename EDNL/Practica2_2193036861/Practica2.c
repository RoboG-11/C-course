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
/*
void quitar_cabeza(ListaS *lista);
void quitar_cola(ListaS *lista);
void quitar_enmedio(ListaS *lista, Nodo *elemento);*/

Nodo *quitar_cabeza(ListaS *lista);
Nodo *quitar_cola(ListaS *lista);
Nodo *quitar_enmedio(ListaS *lista, Nodo *elemento);
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

/*void quitar_cabeza( ListaS *lista ){
    Nodo *aux = NULL;
    if( !isEmpty( *lista ) ){
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        free( aux );
        }
    else{
        //printf("\nLa lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }
}*/

Nodo *quitar_cabeza( ListaS *lista ){
    Nodo *aux = NULL;

    if( !isEmpty( *lista ) ){
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        aux->sig = NULL;
        return aux;
        }

}

/*void quitar_cola( ListaS *lista ){
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
}*/


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


/*void quitar_enmedio( ListaS *lista, Nodo *elemento ){
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
}*/


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
/*ListaS *buscarAlumMenor ( ListaS *lista ) {
    if ( isEmpty( *lista ) == 1) {
        return NULL;
    }
    ListaS *menores = crear_ListaS();
    Nodo *mov = lista->cabeza;
    Nodo aux = *mov;
    while ( mov->sig != NULL ) {
        if ( mov->datos->edad < 23 ) {
            mov = mov->sig;
            lista->cabeza = mov;
            aux.sig = NULL;
            if ( isEmpty( *menores ) == 1) {
                insertar_cabeza( menores, &aux );
            } else {
                insertar_cola( menores, &aux );
            }
        } else{
            mov = mov->sig;
        }
    }
    mov = NULL;
    free( mov );
    if ( aux.datos->edad < 23 ) {
        quitar_cola( lista );
        aux.sig = NULL;
        insertar_cola(menores, &aux);
    }
    free( mov );
    return menores;
}*/

// prototype2 of "buscarAlumMenor"
ListaS *buscarAlumMenor ( ListaS *lista ) {
    Nodo *aux = lista->cabeza;
    Nodo *aux2, *recorre;
    ListaS *menores = crear_ListaS();
    while ( aux->sig != NULL ) {
        if ( aux->datos->edad < 23 ) {
            if ( lista->cabeza == aux ) { //cabeza
                aux = aux->sig;
                aux2 = quitar_cabeza( lista );
                if ( isEmpty( *menores ) == 1) {
                    insertar_cabeza( menores, aux2 );
                } else {
                    insertar_cola( menores, aux2 );
                }
            } else if ( aux->sig == NULL ) { //cola
                aux2 = quitar_cola( lista );
                insertar_cola( menores, aux2 );
                return menores;
            } else { 
                    if ( aux->datos->edad < 23) { // em medio
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

    if ( aux->datos->edad < 23) {
        aux2 = quitar_cola(lista);
        insertar_cola(menores, aux2);
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

// prototype of listaConsola
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



//prototype of printListaArc
void printListaArchivo(ListaS *lista){
    Nodo *aux = lista->cabeza;
    Alumnos *alu;
    Nodo *cabeza;
    FILE *archivo = fopen("alumnos.txt", "w+");
    char texto[] = "\n";
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





//main Function
int main () {

    ListaS *alumnos = crear_ListaS();
    //listaConsola( alumnos );
    Nodo *saul = crear_Nodo( crear_Alumno( "Saul", 21, 2183042802, "Computacion", "CNI" ) );
    Nodo *brian = crear_Nodo( crear_Alumno("Brian", 25, 2193036861, "Computacion", "CNI") );
    Nodo *alberto = crear_Nodo( crear_Alumno( "Alberto", 20, 2203456798, "Computacion", "CNI" ) );
    Nodo *andrea = crear_Nodo(crear_Alumno("Andrea", 28, 2203456798, "Computacion", "CNI"));
    Nodo *hector = crear_Nodo( crear_Alumno( "hector", 21, 2183042802, "Computacion", "CNI" ) );
    Nodo *andres = crear_Nodo( crear_Alumno("andres", 27, 2193036861, "Computacion", "CNI") );
    Nodo *ramon = crear_Nodo( crear_Alumno( "ramon", 20, 2203456798, "Computacion", "CNI" ) );
    Nodo *juan = crear_Nodo(crear_Alumno("juan", 28, 2203456798, "Computacion", "CNI"));

    insertar_cabeza( alumnos, saul );
    insertar_cola( alumnos, brian );
    insertar_enmedio( alumnos, saul , alberto);
    insertar_cola( alumnos, andrea );
    insertar_cola( alumnos, hector );
    insertar_cola( alumnos, andres );
    insertar_cola( alumnos, ramon );
    insertar_cola( alumnos, juan );

    ListaS *menores = buscarAlumMenor( alumnos );

    printLista( alumnos );
    printf( "\nImprimiendo la lista de los alumnos menores: \n" );
    printLista( menores );
    //printListaArchivo( alumnos );
    vaciarLista( alumnos );
    vaciarLista( menores );
    free( alumnos );


    return 0;
}


/*void OrdenamientoIsertion(ListaS* lista){
    Nodo* cabeza = lista->cabeza;
    Nodo* aux = NULL;

    while(cabeza != NULL){
        Nodo* auxSig = cabeza->sig;
        aux = InsertionNodo(aux, cabeza, lista);
        cabeza = auxSig;
    }
}

Nodo* InsertionNodo(Nodo* aux, Nodo* cabeza, ListaS* lista){
    if(aux == NULL || lista->cabeza->datos >= cabeza->datos){ //lista->cabeza->datos. Primero
        cabeza->sig = aux;
        return cabeza;
    }
    else{
        Nodo* help = aux;

        while(help->sig != NULL && help->sig->datos < cabeza->datos){ //lista->cabeza->datos
            help = help->sig; //Checar si va solo en el while
            cabeza->sig = help->sig;
            help->sig = cabeza;
        }
    }
    return aux;
}*/


void OrdenamientoIsertion(ListaS* lista){
    Nodo* cabeza = lista->cabeza;
    Nodo* aux = NULL;

    while(cabeza != NULL){
        Nodo* auxSig = cabeza->sig;

        if(aux == NULL && lista->cabeza->datos >= auxSig->datos){ //lista->cabeza->datos. Primero
        aux = cabeza->sig;
        cabeza->sig = aux->sig;
        aux->sig = cabeza;
        lista->cabeza = aux;
        cabeza = aux->sig;
        }
        else{
            Nodo* help = aux;

            while(help->sig != NULL && help->sig->datos > cabeza->sig->datos){ //lista->cabeza->datos
                cabeza->sig = help->sig;
                help->sig = cabeza;//***
                help = help->sig; //Checar si va solo en el while****
            }
            //aux = aux; Checar línea 
        }
        cabeza = auxSig;
    }
}