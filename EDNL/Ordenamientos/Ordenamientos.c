/*ordenamientos.c*/
/*funciones o procedimientos*/
#include "ordenamientos.h"
#include <stdio.h>
#include <stdlib.h>


void pedir_numeros(int a[]){
    int num, i;
    printf("\nDame 10 numeros entre 1 y 10 conforme se soliciten");
    //scanf("%d",&num);
   

    for(i=0; i<10;i++){
        verificar:
            printf("\nDame un numero entre 1 y 10\n");
            scanf("%d",&num);
            if(num >0 && num <11){
                a[i]=num;
            }
            else{
                printf("\nNumero fuera de rango ingresa uno nuevo\n");
                goto verificar;
            }
    }
}

void print_array(int a[], int n){
    int i;
    for(i=0; i<n;i++){
        printf("\nEl numero en la posición %d es %d", i, a[i]);
    }
}

void copiar_arreglo(int a[],int b[],int n){
    int i;
    for(i=0; i<n;i++){
        b[i]=a[i];
        
    }
    printf("\nEl arreglo se copio correctamente");
}

void ordenamiento_seleccion(int a[], int n){
    int indiceMenor, i , j;
    for(i=0; i<n-1; i++){
        indiceMenor=i;
        for(j=i+1 ; j<n ; j++){
            if(a[j] < a[indiceMenor]){
                indiceMenor = j;
            }
        }
        if(i != indiceMenor){
            int aux = a[i];
            a[i]=a[indiceMenor];
            a[indiceMenor]=aux;
        }
    }
}

void ordenamiento_insercion(int a[],int n){
    int i,j,aux;
    for(i = 1; i < n ; i++){
        j = i;
        aux = a[i];
        while(j > 0 && aux < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }
}

void ordenamiento_burbuja(int a[], int n){  // a= [7,5,2,9] //a= [5,2,7,9]
    int interruptor=1; //n=4
    int pasada, j;
    //pasada = 0 hasta pasada < 4-1=3 && iterruptor=1
    for(pasada = 0; pasada < n-1 && interruptor; pasada++){ //pasada=1//pasada=2
        interruptor =0;
        //desde j=0 hasta j menor 4-1-1=2
        for(j=0 ; j < n-pasada-1 ; j++){ //j=0 //j=1//j=2 /////con pasada=2 4-2-1=1
            if(a[j]>a[j+1]){ //5>2//5>7//   ///2>5
                int aux;
                interruptor=1;
                aux= a[j]; // aux=5
                a[j]=a[j+1];//a[0]=2
                a[j+1]=aux;//a[1]=5...a= [2,5,7,9]
            }
        }
    }    
}

void ordenamiento_burbuja2(int a[], int n){ //a= [7,5,2,9], n=4
    int i,j, indiceIntercambio;
    i = n-1;  //i=4-1=3
    while(i>0){ //3>0
        indiceIntercambio = 0;
        for(j=0 ; j<i ; j++){ //desde j= 0 hasta j < 3 con j=0// j=1 //j=2 //j=3
            if(a[j+1]<a[j]){ // 5<7 // 2<7 //9<7
                int aux = a[j]; //aux=7 // aux=7
                a[j] = a[j+1]; //a[0]=5 //a[1]=2
                a[j+1] = aux; //a[1]=7 ... a[5,7,2,9] //a[2]=5...a[5,2,7,9]
                indiceIntercambio = j; //iI=0 //iI=1
            }
        }
        i = indiceIntercambio; //i=1
    }
}

/*devuelve el indice del elemento buscado en caso de ser encontrado o un -1 en caso de no estar*/
int busqueda_binaria(int a[], int n, int elemento){ //a= [2,4,6,8,10,12,14,16,18,19,20,22,24]
    int central, bajo, alto, valorCentral;
    bajo = 0;
    alto = n-1; //alto = 12
    while(bajo <= alto){ //0 <= 12    ////0 <= 5
        central = (bajo + alto)/2; //central = 0+12/2= 6  ////central= 0+5/2= 2.5->2
        printf("\nposicion central = %d",central);
        valorCentral = a[central]; //vC= 14 ////vC=6
        printf("\nvalor central = %d",valorCentral);
        
        if(elemento == valorCentral){ //14==14 // 8==14 /// 8 ==6
            printf("\nEl elemento %d se encuentra en la posición %d", elemento, central);
            printf("\nYa encontré el elemento que buscabas, regresaré al menú principal...");
            return (central);
        }
        else if(elemento < valorCentral){ //8 < 14 ////8<6
            alto = central - 1; //alto = 6-1 = 5
        }
        else{ ////
            bajo = central + 1; //bajo = 2+1=3
        }
    }
    printf("\nError el elemento %d no se encuentra en ninguna posición de la lista, regresaré al menú princupal...",elemento);
    return (-1);
}