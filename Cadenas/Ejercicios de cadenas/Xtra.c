/**
 *De acuerdo con la siguiente fracci�n de c�digo responde. 
 *int A=10, B, *P, *Q; Q=&A; B=*Q; *P=155; �Qu� contiene P y *P? Justifique su respuesta
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A=10, B, *P, *Q; 
    Q=&A;
    B=*Q;
    *P=155;

    printf("Valor de P: %d", P);
    //printf("\nValor de *P: %d", *P);
    return 0;
}
