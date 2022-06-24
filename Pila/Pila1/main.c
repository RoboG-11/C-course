/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/*main de la pila main_pila.c*/

typedef int TipoDato;
#include "pila.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Pila pila;
    int x;
    int elemento_tope;
    newPila(&pila); //invovamos al procedimiento crear pila  
    puts("\nLa pila crece con números enteros, termina con 0\n");
    do{
        scanf("%d",&x);
        if(x != 0)
        {
            if(isFull(pila)==0)
            //if(!pilaLlena(pila))
            {
                push(&pila,x);
                printf("\n El elemento insertado es %d \n",x);
            }
            else
            {
                //puts("\n La pila se ha llenado\n");
                x = 0;
            }
        }
    } while(x != 0);

    printPila(pila);
}