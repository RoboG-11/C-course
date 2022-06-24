/*
#include<stdio.h>

void quick_sort(int array[], int cabeza, int cola);

int main(){
    int i, array[7] = {6, 5, 3, 1, 8, 7, 2};
    quick_sort(array, 0, 7);

    for(i = 0; i < 7; i++){
        printf("%d\t", array[i]);
    }

    return 0;
}

void quick_sort(int array[], int cabeza, int cola){
    int pivote, izquierda, derecha, medio;

    //Caso base
    if(cabeza < cola){
        pivote = array[cabeza]; //Inicializamos el pivote con el primer elemento
        izquierda = cabeza;

        //Ubicar los elementos a la izquierda y derecha del pivote
        derecha = cola;
        while(izquierda < derecha){
            while(derecha > izquierda && array[derecha] > pivote){
                derecha--;
            }
            if(derecha > izquierda){
                array[izquierda] = array[derecha];
                izquierda++;
            }
            while(izquierda < derecha && array[izquierda] < pivote){
                izquierda++;
            }
            if(izquierda < derecha){
                array[derecha] = array[izquierda];
                derecha;
            }
        }
        array[derecha] = pivote;
        medio = derecha;

        //Llamadas recursivas
        quick_sort(array, cabeza, medio - 1);
        quick_sort(array, medio + 1, cola);
    }
}
*/








// This code was taken from Rosetta Code
// URL: https://rosettacode.org/wiki/Sorting_algorithms/Quicksort
// Modifications by A. G. Medrano-ChÃ¡vez
#include<stdio.h>
# define N 7 // Define the value of N
int array[N] = {6,5,3,1,8,7,2}; // Define the elements of array

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quicksort(int *a, int len){
  if (len < 2)
    return;
  int div;
  int pivot = a[len / 2];
  
  for (int i = 0, j = len - 1; ; i++, j--){
    while (a[i] < pivot)
      i++;
    while (a[j] > pivot)
      j--;
    div = i;
    if (i >= j)
      break;
    swap(a + i, a + j);
  }
  quicksort(a, div);
  quicksort(a + div, len - div);
  return;
}
 
int main () {
  quicksort(array, N) ;
  int i;
  for(i = 0; i < N; i++){
      printf("%i\t", array[i]);
  }
  return 0;
}




//Código de la doctora Arelí
#include<stdio.h>
void Ordenamiento_quick(int a[], int primero, int ultimo){
    printf("hola");
    int i, j, central, pivote;
    printf("llego aqui");
    central = (primero + ultimo)/2;
    pivote = a[central];
    i = primero;
    j= ultimo;
    do {
        while(a[j] < pivote){i++;}
        while(a[j] > pivote){j--;}
       
        if(i <= j){
            
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);
    if(primero < j)
        {Ordenamiento_quick(a, primero, j);} //recursión para sublista izquierda
    if(i < ultimo)
        {Ordenamiento_quick(a, i, ultimo);} //recursión para sublista derecha
    //printf("\nYa ordené ascendentemente todos los elementos");
}

int main(){
  int a[] = {6,5,3,1,8,7,2};
  int primero= 6;
  int ultimo= 2;

  Ordenamiento_quick(a, primero, ultimo);
  return 0;
}