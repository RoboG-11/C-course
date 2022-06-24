/*main de la lista simple main_listaD.c*/

//typedef int TipoDato;
#include "listaSCirc.h"
#include <stdio.h>
#include <stdlib.h>


int main (){
    ListaSC *L;
    ListaSC *chamacos;
    Nodo *aux1, *aux2;
    L=crear_ListaSC();

    insertar_cabeza(L,crear_Nodo(crear_Alumno(1,"areli",25)));
   // printf("\n ID de la cabeza es: %d\n", L->cabeza->datos->id);
   // printf("\n ID de la cola es: %d\n", L->cola->datos->id);
  //  printLista(L);
   
    insertar_cabeza(L,crear_Nodo(crear_Alumno(2,"rojo",25)));
  //  printLista(L);
    //printf("\n ID nuevo de la cabeza es: %d\n", L->cabeza->datos->id);
    //printf("\n ID de la cola es: %d\n", L->cola->datos->id);
    
    
    insertar_cabeza(L,crear_Nodo(crear_Alumno(3,"hndz",25)));
    //printf("\n ID es: %d\n", L->cabeza->datos->id);

    insertar_cola(L,crear_Nodo(crear_Alumno(4,"mario",25)));
    //printLista(L); 

    aux2=crear_Nodo(crear_Alumno(1,"garcia",24));
    aux1=buscaElemento(L, aux2);

    insertar_enmedio(L, aux1, crear_Nodo(crear_Alumno(7,"torresSSSSS",28)));
    printLista(L);


    quitar_cabeza(L);
    quitar_cola(L);
    quitar_enmedio(L, aux2); // checar
    printLista(L);

    vaciarLista(L);
    printLista(L);

    insertar_cabeza(L,crear_Nodo(crear_Alumno(13,"tami",30)));
    printLista(L);
    //vaciarLista(L);
    //printLista(L);

/*
    aux2=crear_Nodo(crear_Alumno(7,"garcia",24));
    aux1=buscaElemento(L, aux2);

    quitar_enmedio(L, aux2); // checar
    printLista(L);

    vaciarLista(L);
    printLista(L);

    insertar_cabeza(L,crear_Nodo(crear_Alumno(13,"wiwiwiwiwi",29)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(13,"tami",30)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(13,"nova",31)));
    printLista(L);

    vaciarLista(L);
    printLista(L);
  */  

   /* insertar_cola(L,crear_Nodo(crear_Alumno(4,"mario",25)));
    insertar_cola(L,crear_Nodo(crear_Alumno(4,"alberto",25)));
    aux2=crear_Nodo(crear_Alumno(2,"garcia",24));
    aux1=buscaElemento(L, aux2);
    insertar_enmedio(L, aux1, crear_Nodo(crear_Alumno(7,"torresSSSSS",28)));
    printListaSC(L);

*/

   /* aux2=crear_Nodo(crear_Alumno(2,"garcia",24));
    aux1=buscaElemento(L, aux2);
    insertar_enmedioD(L, aux1, crear_Nodo(crear_Alumno(5,"torresSSSSS",28)));

    printLista(L);

    quitar_cola(L);

    quitar_enmedio(L, aux2);

    insertar_cabeza(L,crear_Nodo(crear_Alumno(8,"wiwi",25)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(9,"tami",25)));
    insertar_cabeza(L,crear_Nodo(crear_Alumno(10,"waya",25)));
    
    printLista(L);

    quitar_cabeza(L);

    printLista(L);
    quitar_cabeza(L);
  
    printLista(L);

*/
   // vaciarListaSC(L);
   // printListaSC(L);
    

    //free(L);
    //free(aux1);
    //free(aux2);
    //system ("pause");
    return(0);

}