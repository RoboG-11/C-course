/*main_ordenamientos.c*/

#include "ordenamientos.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    //int cantidad;
	int arreglo1[10];
    int arreglo2[10];
    int arreglo3[10];
    int arreglo4[10];
    printf("\n Bienvenido al programa de ordenamiento de arreglos\n ");
   /* printf("Dime cuantos numeros enteros quieres ordenar: ");
    scanf("%d",&cantidad);

    int *arreglo1 = (int*)malloc(sizeof(int)*cantidad);
    int *arreglo2 = (int*)malloc(sizeof(int)*cantidad);
    int *arreglo3 = (int*)malloc(sizeof(int)*cantidad);
    int *arreglo = (int*)malloc(sizeof(int)*cantidad);
    */

//Pila* pila = (Pila*)malloc(sizeof(Pila));

    pedir_numeros(arreglo1);
    
    print_array(arreglo1, 10);

    //ordenamiento_seleccion(arreglo1, 10);
    //ordenamiento_insercion(arreglo2, 10);
    //printf("\n\nEl arreglo que introdujiste ordenado de menor a mayor por medio  de ordenamiento por seleccion es el siguiente:");
    //print_array(arreglo1, 10);
  
    copiar_arreglo(arreglo1, arreglo2,10);
    copiar_arreglo(arreglo1, arreglo3,10);
    copiar_arreglo(arreglo1, arreglo4,10);

    int option=1;

    while(option != 6){
        printf("\n\n");
        printf("1- Ordenamiento por seleccion \n2- Ordenamiento por insercion\n3- Ordenamiento Burbuja\n4- Ordenamiento Burbuja mejorado\n5- Buscar un elemento\n6- Salir\n Opcion: ");
        scanf("%d",&option);
        system("clear");

        switch(option){
            
            case 1:{
                printf("\n\nEl arreglo que introdujiste  es el siguiente ");
                print_array(arreglo1, 10);
                ordenamiento_seleccion(arreglo1, 10);
                printf("\n\nEl arreglo que introdujiste ordenado de menor a mayor por medio  de ordenamiento por seleccion es el siguiente:");
                print_array(arreglo1, 10);

            	break;
            }

            case 2:{
                printf("\n\nEl arreglo que introdujiste  es el siguiente ");
                print_array(arreglo2, 10);
                ordenamiento_insercion(arreglo2, 10);
                printf("\n\nEl arreglo que introdujiste ordenado de menor a mayor por medio  de ordenamiento por insercion es el siguiente:");
                print_array(arreglo2, 10);
            	
            	break;
            }

            case 3:{
            	printf("\n\nEl arreglo que introdujiste  es el siguiente ");
                print_array(arreglo3, 10);
                ordenamiento_burbuja(arreglo3, 10);
                printf("\n\nEl arreglo que introdujiste ordenado de menor a mayor por medio  de ordenamiento por burbuja es el siguiente:");
                print_array(arreglo3, 10);
            	break;	
            }

            case 4:{
                printf("\n\nEl arreglo que introdujiste  es el siguiente ");
                print_array(arreglo4, 10);
                ordenamiento_burbuja2(arreglo4, 10);
                printf("\n\nEl arreglo que introdujiste ordenado de menor a mayor por medio  de ordenamiento por burbuja mejorado es el siguiente:");
                print_array(arreglo4, 10);
            	break;	
            }

            case 5:{
                int elemento;
                printf("\n\nPara hacer una busqueda primero se tuvo que ordenar la lista");
                printf("\n\nEl arreglo que introdujiste  es el siguiente ");
                print_array(arreglo1, 10);
                printf("\n\nDime que elemento quieres buscar en la lista que introdujiste\n");
                scanf("%d",&elemento);
                int pos_elemento = busqueda_binaria(arreglo1, 10, elemento);
                break;
            }

            default:{
                printf("\n\nPrograma finalizado que tengas un excelente día n___n \n");
                break;
            }
        }
    }
    
    return(0);
}

/*
int main(){
    int arreglo1[10];
    int arreglo2[10];
    int arreglo3[10];
    int arreglo4[10];
     
    printf("\n Bienvenido al programa de ordenamiento de arreglos\n ");
    pedir_numeros(arreglo1);
    copiar_arreglo(arreglo1, arreglo2,10);
    copiar_arreglo(arreglo1, arreglo3,10);
    copiar_arreglo(arreglo1, arreglo4,10);
   
    printf("\n\nEl arreglo que introdujiste  es el siguiente ");
    print_array(arreglo1, 10);


    // system ("pause");
    return(0);
}*/