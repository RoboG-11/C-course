/**
 *De acuerdo con la siguiente fracción de código responde. 
 *int A=10, B, *P, *Q; Q=&A; B=*Q; *P=155; ¿Qué contiene P y *P? Justifique su respuesta
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int A=10, B, *P, *Q; 
    Q=&A;
    B=*Q;
    *P=155;

    printf("Valor de P: %d", P);
    printf("\nValor de *P: %p", *P);

    system("pause");
    return 0;
}