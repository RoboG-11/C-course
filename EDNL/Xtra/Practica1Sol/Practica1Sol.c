//
//  main.c
//  Infijo_postfijo
//
//  Created by Andrés Vicente Macias on 13/10/20.
//  Copyright © 2020 Andrés Vicente Macias. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

typedef struct {
    char caracter;
}EXPRESION;
typedef struct node{
    struct node *next;
    EXPRESION ex;
}NODO;
typedef struct {
    NODO *head;
    int size;
    
}PILA;
void imprimir(PILA *p);
void crear_pila(PILA *p){
    p->head=NULL;
    p->size=0;
    return;
}
void inicializa_nodo(NODO *x){
    x->next = NULL;
}
void PUSH(PILA *p,NODO *x){
    NODO *aux;
    if (p->head == NULL) {
        p->head = x;
        p->head->next = NULL;
    }else{
        aux = p->head;
        p->head = x;
        p->head->next = aux;
    }
    p->size++;
    //printf("\nEn pila: ");
    //imprimir(p);
}
void POP(PILA *p){
    NODO *aux;
    if (p->head!=NULL) {
        aux = p->head;
        p->head = p->head->next;
        if((aux->ex.caracter == 40 || aux->ex.caracter == 41) ){
            
        }else{
           printf("%c",aux->ex.caracter);
        }
        //
        free(aux);
    }else{
        p->head = NULL;
        p->head->next = NULL;
    }
    //imprimir(p);
}
int Precedencia(char C){
    int pres;
    switch(C)
    {
        case '(':
            pres = 1;
            break;
        case '+':
            pres = 2;
            break;
        case '-':
            pres = 2;
            break;
        case '*':
            pres = 3;
            break;
        case '/':
            pres = 3;
            break;
        case '^':
            pres = 4;
            break;
        case ')':
            pres = 5;
            break;
        default:
            pres = 0;
            break;
    }
    return pres;
}
void imprimir(PILA *p){
    NODO *aux;
    aux = p->head;
    while (aux != NULL) {
        //printf("%c",aux->ex.caracter);
        aux = aux->next;
    }
    //printf("\n");
}
void postfijo(PILA *p,char caracter){
    NODO *aux1;
    if (Precedencia(caracter) == 0) {
        printf("%c",caracter);
    }else{
        aux1 = (NODO*)malloc(sizeof(NODO));
        inicializa_nodo(aux1);
        aux1->ex.caracter = caracter;
        if (Precedencia(aux1->ex.caracter) == 5) {
            while (p->head != NULL && Precedencia(p->head->ex.caracter) != 1) {
                 POP(p);
            }
            POP(p);
            //PUSH(p, aux1);
        }else{
            if (Precedencia(aux1->ex.caracter) == 1) {
                PUSH(p, aux1);
            }else{
                if (p->head == NULL) {
                    PUSH(p,aux1);
                }else{
                    while (p->head != NULL &&(Precedencia(caracter) <= Precedencia(p->head->ex.caracter))) {
                        POP(p);
                    }
                    PUSH(p, aux1);
                }
             }
        }
    }
}
void vaciar_restantes_en_pila(PILA *p){
    NODO *aux1;
    aux1 = p->head;
    while (aux1!= NULL) {
        POP(p);
        aux1 = p->head;
    }
}
int main(int argc, const char * argv[]) {
    PILA *p; //creamos la pila
    int N,i; //creamos dos enteros que nos ayudarán más adelante
    char Expresion[100]; // creamos un char que leerá toda la expresión
    scanf("%d",&N); //scaneamos del archivo el numero entero N
    while(N){ //mientras N > 0
        p = (PILA*)malloc(sizeof(PILA)); //le damos memoria a la pila
        crear_pila(p);//inicializamos la pila
        scanf("%s",Expresion); //escaneamos la expresión del archivo
        for(i=0; Expresion[i];i++){ // hacemos un for hasta que ya no haya nada en la expresión
            postfijo(p,Expresion[i]); //llamamos a función posfijo
        }
        vaciar_restantes_en_pila(p); //como al hacer la converción, puede que aún haya cosas en la pila, se saca todo de la pila
        printf("\n");
        free(p); //libreamos la memoria de la pila
        N--; //decrementamos nuestro contador
    }
}