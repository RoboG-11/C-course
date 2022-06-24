/*lista_doble.c* todas funciones*/
/*Librerias*/
#include "lista_doble.h"
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
    aux->ant=NULL;
    return(aux);
}

ListaD *crear_ListaD(){
    ListaD *aux=(ListaD*)malloc(sizeof(ListaD));
    aux->cabeza=NULL;
    return(aux);
}

int isEmpty(ListaD lista){
    if(lista.cabeza==NULL){
        printf("\n Lista Vacia funcion isEmpty\n");
        return(1);
    }
    else{
        printf("\n La Lista No Esta Vacia funcion isEmpty \n");
        return (0);
    }
}

void insertar_cabeza(ListaD *lista, Nodo *aux){
    if(isEmpty(*lista)==1){
        lista->cabeza=aux;
    }
    else{
        /*aux->sig=lista->cabeza;
        lista->cabeza->ant=aux;*/

        lista->cabeza->ant=aux;
        aux->sig=lista->cabeza;
        lista->cabeza=aux;
    }
}

void insertar_cola(ListaD *lista, Nodo *aux){
    Nodo *cola;
    //cola = lista->cabeza;
    if(isEmpty(*lista)==1){
        insertar_cabeza(lista,aux);
    }
    else{
        cola = lista->cabeza;
        while(cola->sig != NULL){
            cola=cola->sig;
        }
        cola->sig=aux;
        aux->ant=cola;
        //aux->ant=lista->cabeza;
        cola=aux;
    }
}

void insertar_enmedioD(ListaD *lista, Nodo *despues,Nodo *elemento){
    if(isEmpty(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        if(despues->sig==NULL){
            insertar_cola(lista,elemento);
        }
        else{
            elemento->ant=despues;
            elemento->sig=despues->sig;
            despues->sig=elemento;
            despues=elemento->sig;
            despues->ant=elemento;
        }
    }
}

void insertar_enmedioA(ListaD *lista, Nodo *antes,Nodo *elemento){
    if(isEmpty(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        //if(lista->cabeza==antes){
        if(antes->ant==NULL){
            insertar_cabeza(lista,elemento);
        }  
        else{
            elemento->sig=antes;
            elemento->ant=antes->ant;
            antes->ant=elemento; 
            antes=elemento->ant;
            antes->sig=elemento;
            //elemento->ant->sig=elemento; 96 y 97
        }
    }
}

void quitar_cabeza(ListaD *lista){
    Nodo *aux = NULL;
   // aux=lista->cabeza;
    if(!isEmpty(*lista))
    {
        aux=lista->cabeza;
        if(aux->sig==NULL){
            //aux->sig=NULL;
            aux->ant=NULL;
            aux=NULL;
            lista->cabeza=NULL;
            free(aux);
        }
        else{
            lista->cabeza=lista->cabeza->sig;
            lista->cabeza->ant=NULL;
            aux->sig=NULL;
            aux->ant=NULL;
            free(aux);
        }
    }
    else{
        printf("\n La lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }
}

void quitar_cola(ListaD *lista){
    Nodo *cola;
    Nodo * aux;
    if(isEmpty(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else
    {
        if(lista->cabeza->sig == NULL)
        {
            cola=lista->cabeza;
            //cola->sig=NULL;
            //cola->ant=NULL;
            lista->cabeza=NULL;
            free(cola);
            printf("\n  Memoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else
        {
            cola=lista->cabeza;
            while(cola->sig != NULL)
            {
                cola = cola->sig;
            }
            aux=cola;
            //cola=cola->ant;
            cola=aux->ant; //161=162
            cola->sig=NULL;
            aux->ant=NULL;
            free(aux);
        }
    }
}

void quitar_enmedio(ListaD *lista, Nodo *elemento){
    Nodo *aux;
    Nodo *borrar;
    if(isEmpty(*lista)==1){
        printf("\n La pila esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar=buscaElemento(lista,elemento);//pendiente
        if(borrar==NULL){
            printf("\n El elemento no se encuentra en la lista\n");  
        }
        else{
            if(lista->cabeza == borrar){
                quitar_cabeza(lista);
                //quitar_cola(lista);
            }
            else{
                aux=borrar->ant;
                aux->sig=borrar->sig;
                aux=borrar->sig;
                aux->ant=borrar->ant;
                borrar->ant=NULL;
                borrar->sig=NULL;
                free(borrar);
            }
        }
    }
}

void vaciarLista(ListaD *lista){
    Nodo *aux = lista->cabeza;
    if(isEmpty(*lista)==1){
        printf("\n LISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    else{
        while(aux->sig != NULL){
            aux=aux->sig;
            quitar_cabeza(lista);
        }
        quitar_cabeza(lista);
    }
    free(aux);
}

Nodo* buscaElemento(ListaD *lista, Nodo *elemento){
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
    return(aux);
}
/*ver si la condición del while funciona para todos 
los nodos*/
void printLista(ListaD *lista){
    Nodo *aux = lista->cabeza;
    Alumno *alu;
    if(isEmpty(*lista)!=1) {
        while(aux!=NULL){
            alu = aux->datos;
            printf("\n ID es: %d\n", alu->id);
            printf("\n Name es: %s", alu->name);
            printf("\n Edad es: %d \n", alu->edad);
            aux=aux->sig;
        }
    }
    else{
        printf("\n LISTA SIN NADA FUNCION PRINT LISTA \n");
    }
}