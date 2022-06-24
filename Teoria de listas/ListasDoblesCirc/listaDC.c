/*Librerias*/
#include "listaDC.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Funciones y/o procedimientos*/
//Alumno* crear_Alumno(int ID,char NAME[20],int EDAD){
Alumno* crear_Alumno(int ID,char NAME[20], int EDAD){
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

ListaDC *crear_ListaDC(){
    ListaDC *aux=(ListaDC*)malloc(sizeof(ListaDC));
    aux->cabeza=NULL;
    aux->cola=NULL;
    return(aux);
}

int isEmpty(ListaDC lista){
    if(lista.cabeza==NULL && lista.cola==NULL){
        printf("\n Lista Vacia funcion isEmpty\n");
        return(1);
    }
    else{
        printf("\n La Lista No Esta Vacia funcion isEmpty \n");
        return (0);
    }
}

void insertar_cabeza(ListaDC *lista, Nodo *aux){
    if(isEmpty(*lista)==1){
        lista->cabeza=aux;
        lista->cola=aux;
        lista->cabeza->sig=aux;
    }
    else{
        aux->sig=lista->cabeza;
        lista->cabeza->ant=aux;
        lista->cabeza=aux;
        lista->cola->sig=lista->cabeza;
        lista->cabeza->ant=lista->cola;  
    }
}

void insertar_cola(ListaDC *lista, Nodo *aux){
    if(isEmpty(*lista)==1){
        insertar_cabeza(lista,aux);
    }
    else{  
        lista->cola->sig=aux;
        aux->ant=lista->cola;
        lista->cola=aux;
        lista->cola->sig=lista->cabeza;
        lista->cabeza->ant=lista->cola;
    }
}

void insertar_enmedioD(ListaDC *lista, Nodo *despues, Nodo *elemento){
    if(isEmpty(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        if(despues->sig==lista->cabeza){
            insertar_cola(lista,elemento);
        }
        else{
            // elemento->sig=despues->sig;
            elemento->ant=despues;
            elemento->sig=despues->sig;
            despues->sig=elemento;
            despues=elemento->sig;
            despues->ant=elemento;
        }
    }
}

void insertar_enmedioA(ListaDC *lista, Nodo *anterior, Nodo *elemento){
    if(isEmpty(*lista)==1){
        lista->cabeza=elemento;
    }
    else{
        if(anterior == lista->cabeza){
            insertar_cabeza(lista,elemento);
        }
        else{
            elemento->sig=anterior;
            elemento->ant=anterior->ant;
            anterior->ant=elemento;
            anterior=elemento->ant;
            anterior->sig=elemento;
        }     
    }
}

Nodo* buscaElemento(ListaDC *lista, Nodo *elemento){
    Nodo* aux = lista->cabeza;
    Alumno *alu;
    if(!isEmpty(*lista)){
        
        while(aux->datos->id != elemento->datos->id){
            if(aux->sig !=NULL){
                aux=aux->sig;
            }
            else{
                printf("\nEl elemento con ID = %d no se encuentra en la lista\n",elemento->datos->id);
                aux=NULL;
                return(aux);
                break;
            }
        
        }
        if(aux->datos->id == elemento->datos->id){
            printf("\nEl elemento con ID = %d si esta en la lista\n",elemento->datos->id);
            return(aux);
        }
    }
    else{
        printf("\n EL ELEMENTO NO SE ENCUENTRA LA LISTA NO TIENE NADA \n");
        return(NULL);
    }
    return(aux);
}

void quitar_cabeza(ListaDC *lista){
    Nodo *aux=NULL;
    if(isEmpty(*lista)==0)
    {   
        if(lista->cabeza==lista->cola){
            lista->cola=NULL;
            lista->cabeza=NULL;
            free(aux); 
        }
        else{
            aux=lista->cabeza;
            lista->cabeza=lista->cabeza->sig;
            lista->cabeza->ant=lista->cola;
            lista->cola->sig=lista->cabeza;
            aux->sig=NULL;
            aux->ant=NULL;
            //aux=NULL;
            free(aux);
            //aux=NULL;
        }
    }
    else{
        printf("\n La lista esta vacia  estoy dentro del procedimiento quitar cabeza  \n");
    }
}

void quitar_cola(ListaDC *lista){
    Nodo * aux;
    if(isEmpty(*lista)==1){
        printf("\n La lista esta vacia estoy dentro del procedimiento quitar cola \n");    
    }
    else
    {
        if(lista->cabeza == lista->cola)
        {
            quitar_cabeza(lista);
            printf("\n  Memoria liberada estoy dentro del procedimiento quitar cola\n");
        }
        else
        {
            aux=lista->cola;
            lista->cola=lista->cola->ant;
            lista->cola->sig=lista->cabeza;
            lista->cabeza->ant=lista->cola;
            aux->ant=NULL;
            aux->sig=NULL;
            free(aux);
        }
    }
}

void quitar_enmedio(ListaDC *lista, Nodo *elemento){
    Nodo *aux;
    Nodo *borrar;
    if(isEmpty(*lista)==1){
        printf("\n La lista esta vacia estoy dentro del procedimiento quitar enmedio \n");    
    }
    else{
        borrar=buscaElemento(lista,elemento);
        if(borrar==NULL){
            printf("\n El elemento no esta en la lista \n");  
        }
        else{
            if(lista->cabeza == borrar){
                quitar_cabeza(lista);
            }
            else{
                if(borrar==lista->cola){
                    quitar_cola(lista);
                }
                else{
                    aux=borrar->ant;
                    aux->sig=borrar->sig;
                    aux=borrar->sig;
                    aux->ant=borrar->ant;

                    borrar->ant=NULL;
                    borrar->sig=NULL;
                    aux=borrar;
                    free(borrar);
                    //free(aux);
                    borrar=NULL;
                    //aux=NULL;
                }    
            }
        }
    }
}

void vaciarLista(ListaDC *lista){
    Nodo *aux = lista->cabeza;
    if(isEmpty(*lista)==1){
        printf("\n LISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    else{
        while(aux != lista->cola){
            aux=aux->sig;
            quitar_cabeza(lista);
           
        }
        quitar_cabeza(lista); 
    }
    free(aux);
}


void vaciarListaR(ListaDC *lista){
    Nodo *aux = lista->cola;
    if(isEmpty(*lista)==1){
        printf("\n LISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    else{
        while(aux != lista->cabeza){
            aux=aux->ant;
            quitar_cola(lista);
           
        }
        quitar_cola(lista);
        //quitar_cabeza(lista); 
    }
    free(aux);
}



void printLista(ListaDC *lista){
    Alumno *alu;
    if(isEmpty(*lista)==1){
        printf("\n LISTA SIN NADA PROCEDIMIENTO PRINT LISTA \n");
    }
    else{
        Nodo *aux = lista->cabeza;
        alu = aux->datos;
        while(aux != lista->cola){
            alu = aux->datos;
            printf("\n ID es: %d\n", alu->id);
            printf("\n Name es: %s\n", alu->name);
            printf("\n Edad es: %d \n", alu->edad);
            aux=aux->sig;
        }
        alu = lista->cola->datos;
        printf("\n ID es: %d\n", alu->id);
        printf("\n Name es: %s\n", alu->name);
        printf("\n Edad es: %d \n", alu->edad);
    }
}