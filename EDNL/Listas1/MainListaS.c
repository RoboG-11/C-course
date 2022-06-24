/*main de la lista simple main_lista_simple.c*/

//typedef int TipoDato;
#include "listaS.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    ListaS *p;
    Nodo *aux, *aux2;
    int ID;
    p=crear_ListaS();
    
    insertar_cabeza(p,crear_Nodo(crear_Alumno(1,"areli",25)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(2,"rojo",24)));
    insertar_cabeza(p,crear_Nodo(crear_Alumno(3,"hernandez",23)));
    //printLista(p);
    insertar_cola(p,crear_Nodo(crear_Alumno(4,"mario",21)));
    printLista(p);
//hndz

//rojo

//areli
//mario

    ID=2;
   aux2=crear_Nodo(crear_Alumno(2,"raul ",22));
 //Nodo* buscaElemento(ListaS *lista, ID)

   ///// aux2=crear_Nodo(crear_Alumno(7,"alvarez",24));
    /////aux=buscaElemento(p, ID);
    
    aux=buscaElemento(p, aux2);

    insertar_enmedio(p, aux, crear_Nodo(crear_Alumno(5,"garcia",28)));
    printLista(p);



//hndz
//rojo
//garcia
//areli
//mario

    quitar_cabeza(p);
    quitar_cabeza(p);
    quitar_cabeza(p);
    quitar_cabeza(p);

    printLista(p);


    //quitar_cabeza(p);
    //printLista(p);

//rojo
//garcia
//areli
//mario

    quitar_cola(p);
    printLista(p);

//rojo
//garcia
//areli

/*
    aux2=crear_Nodo(crear_Alumno(1,"raul ",22));
    quitar_enmedio(p, aux2);
    printLista(p);
*/

//garcia
//areli

    //insertar_cabeza(p,crear_Nodo(crear_Alumno(3,"hernandez",23)));
    //printLista(p);
    insertar_cola(p,crear_Nodo(crear_Alumno(4,"mario",21)));

    //insertar_enmedio(p, aux, crear_Nodo(crear_Alumno(5,"garcia",28)));
    printLista(p);

    vaciarLista(p);

    
    //printLista(p);
    system ("pause");
    return(0);

}