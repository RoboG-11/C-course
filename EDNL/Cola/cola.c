/*cola.c* todas funciones*/
/*Librerias*/
#include "cola.h"
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

Cola *crear_Cola(){
    Cola *aux=(Cola*)malloc(sizeof(Cola));
    aux->cabeza=NULL;
    //aux->longitud=0;
    return(aux);
}

int isEmpty(Cola Cola){
    if(Cola.cabeza==NULL)
    {
        printf("\n Cola Vacia funcion isEmpty\n");
        return (1);
    }
    else{
        printf("\n La Cola No Esta Vacia funcion isEmpty \n");
        return (0);
    }
}

void insertar_cola(Cola *Cola, Nodo *aux){
    Nodo *ultimo;
    ultimo = Cola->cabeza;
    if(isEmpty(*Cola)==1){
        //insertar_cabeza(Cola,aux);
        Cola->cabeza=aux;
    }
    else{
        while(ultimo->sig != NULL){
            ultimo = ultimo->sig;
        }
        ultimo->sig=aux;
        ultimo=aux;    
    }
}

void quitar_cabeza(Cola *Cola){
    Nodo *aux=NULL;
    if(!isEmpty(*Cola)){
        aux=Cola->cabeza;
        Cola->cabeza=Cola->cabeza->sig;
        aux->sig=NULL;
        free(aux);
        //aux=NULL;
    }
    else{
        printf("\n La Cola esta vacia estoy dentro del procedimiento quitar cabeza \n");
    }
}

//Nodo* buscaElemento(Cola *lista, Nodo *elemento){
Nodo* buscaElemento(Cola *lista, int ID){
    Nodo* aux = lista->cabeza;
    Alumno *alu;
    if(!isEmpty(*lista)){
        
        while(aux->datos->id != ID){
        //while(aux->datos->id != elemento->datos->id){
            if(aux->sig !=NULL){
                aux=aux->sig;
            }
            else{
                //printf("\nEl elemento con ID = %d no se encuentra en la cola\n",elemento->datos->id);
                printf("\nEl elemento con ID = %d no se encuentra en la cola\n",ID);
                aux=NULL;
                return(aux);
                break;
            }
        
        }
        if(aux->datos->id == ID){
        //if(aux->datos->id == elemento->datos->id){
            //printf("\nEl elemento con ID = %d si esta en la cola\n",elemento->datos->id);
            printf("\nEl elemento con ID = %d si se encuentra en la cola\n",ID);
            return(aux);
        }
    }
    else{
        printf("\n EL ELEMENTO NO SE ENCUENTRA LA COLA NO TIENE NADA \n");
        return(NULL);
    }
    return(aux);
}



void printCola(Cola *Cola){
    Nodo *aux = Cola->cabeza;
    Alumno *alu;
    if(isEmpty(*Cola)!=1) {
        while(aux!=NULL){
            alu = aux->datos;
            printf("\n ID es: %d", alu->id);
            printf("\n Name es: %s", alu->name);
            printf("\n Edad es: %d \n", alu->edad);
            aux=aux->sig;
        }
    }
    else{
        printf("\n COLA SIN NADA FUNCION PRINT \n");
    }
}

void vaciarCola(Cola *Cola){
    Nodo *aux = Cola->cabeza;
    if(isEmpty(*Cola)!=1) {
        while(aux!=NULL){
            aux=aux->sig;
            quitar_cabeza(Cola);
        }
    }
    else{
        printf("\n COLA SIN NADA PROCEDIMIENTO VACIAR COLA \n");
    }
}
