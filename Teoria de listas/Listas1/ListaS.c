/*plista_simple.c* todas funciones*/
/*Librerias*/
#include "listaS.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Funciones y/o procedimientos*/
Alumno* crear_Alumno(int ID,char NAME[20],int EDAD){
    Alumno *aux=(Alumno*)malloc(sizeof(Alumno));
    aux->id=ID;
    strcpy(aux->name, NAME);
    aux->edad=EDAD;
    return(aux);
}

Nodo *crear_Nodo(Alumno *alumno){
    Nodo *aux=(Nodo*)malloc(sizeof(Nodo));
    aux->datos=alumno;
    aux->sig=NULL;
    return(aux);
}

ListaS *crear_ListaS(){
    ListaS *aux=(ListaS*)malloc(sizeof(ListaS));
    aux->cabeza=NULL;
    //aux->longitud=0;
    return(aux);
}

int isEmpty(ListaS lista){
    if(lista.cabeza==NULL){
        printf("\n Lista Vacia funcion isEmpty\n");
        return(1);
    }
    else{
        printf("\n La Lista No Esta Vacia funcion isEmpty \n");
        return (0);
    }
}

void insertar_cabeza(ListaS *lista, Nodo *aux){
    if(isEmpty(*lista)==1){
        lista->cabeza=aux;
    }
    else{
        aux->sig=lista->cabeza;
        lista->cabeza=aux;
    }
}

void insertar_cola(ListaS *lista, Nodo *aux){
    Nodo *cola;
    cola = lista->cabeza;
    if(isEmpty(*lista)==1){
        //lista->cabeza=aux;
        insertar_cabeza(lista,aux);
    }
    else{
        while(cola->sig != NULL){
            cola=cola->sig;
        }
        cola->sig=aux;
        cola=aux;
    }
}

void insertar_enmedio(ListaS *lista, Nodo *anterior,Nodo *elemento){
    if(isEmpty(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        elemento->sig=anterior->sig;
        anterior->sig=elemento;
    }
}

void quitar_cabeza(ListaS *lista){
    Nodo *aux = NULL;
    if(!isEmpty(*lista))
    {
        aux=lista->cabeza;
        lista->cabeza=lista->cabeza->sig;
        free(aux);
    }
    else{
        printf("\n La lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }
}

void quitar_cola(ListaS *lista){
    Nodo *cola;
    Nodo * anterior;
    if(isEmpty(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else
    {
        if(lista->cabeza->sig == NULL)
        {
            lista->cabeza=NULL;
            printf("\n  Memoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else
        {
            cola=lista->cabeza;
            while(cola->sig != NULL)
            {
                anterior = cola;
                cola = cola->sig;
            }
            anterior->sig=NULL;
            free(cola);
            //cola=NULL;
        }
    }
}


void quitar_enmedio(ListaS *lista, Nodo *elemento){
    Nodo *anterior;
    Nodo *borrar;
    if(isEmpty(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar=buscaElemento(lista,elemento);//pendiente
        if(lista->cabeza == borrar){
            quitar_cabeza(lista);
        }
        else{
            anterior=lista->cabeza;
            while(anterior->sig != borrar){
                anterior=anterior->sig;
            }
            anterior->sig=borrar->sig;
            free(borrar);
            printf("\nid=%d",anterior->datos->id);
        }
    }
}
//Nodo* buscaElemento(ListaS *lista, int ID)
Nodo* buscaElemento(ListaS *lista, Nodo *elemento){
    Nodo* aux = lista->cabeza;
    Alumno *alu;
    if(!isEmpty(*lista)){
        //while(aux->datos->id != ID)
        while(aux->datos->id != elemento->datos->id){
            if(aux->sig !=NULL){
                aux=aux->sig;
            }
            else{
                printf("\nEl elemento con ID = %d no se encuentra en la lista\n",elemento->datos->id);
                //printf("\nEl elemento con ID = %d no se encuentra en la lista\n",ID);

                aux=NULL;
                return(aux);
                break;
            }
        
        }
         //if(aux->datos->id == ID)
        if(aux->datos->id == elemento->datos->id){
            printf("\nEl elemento con ID = %d si esta en la lista\n",elemento->datos->id);
            //printf("\nEl elemento con ID = %d si esta en la lista\n",ID);
            return(aux);
        }
    }
    else{
        printf("\n EL ELEMENTO NO SE ENCUENTRA LA LISTA NO TIENE NADA \n");
        return(NULL);
    }
}

void vaciarLista(ListaS *lista){
    Nodo *aux = lista->cabeza;
    if(isEmpty(*lista)!=1){
        while(aux != NULL){
            aux=aux->sig;
            quitar_cabeza(lista);
        }
    }
    else{
        printf("\n LISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    free(aux);
}


void printLista(ListaS *lista){
    Nodo *aux = lista->cabeza;
    Alumno *alu;
    if(isEmpty(*lista)!=1) {
        while(aux!=NULL){
            alu = aux->datos;
            printf("\n ID es: %d", alu->id);
            printf("\n Name es: %s", alu->name);
            printf("\n Edad es: %d \n", alu->edad);
            aux=aux->sig;
        }
    }
    else{
        printf("\n LISTA SIN NADA \n");
    }
}