//Variables locales y globales
#include <stdio.h> //Libreria de entrada y salida

/*
int main() { //Funcion principal

//VARIABLES LOCALES
//Variable 'i' solo es accesible dentro del ciclo 
    for (int i = 0; i < 16; i++){ //Ciclo for, con variable local
        printf("\nValor de i: %i",i); //Impresion del resultado
        i += 3; //Operacion de asigancion
    }
    
    //Esto dara un error por que la variable 'i' ya no existe aqui
    printf("\nValor final de i: %d",i); //Impresion del resultado
    
    return 0; //Termina el programa
}
*/

//VARIABLES GLOBALES
//La variable esta afuera de la funcion principal
int variable = 0; //Declaracion de una variablo global
int main() { //Funcion principal

	printf("Variable = %i",variable); //Impresion de la asigancion
	//* Le cambiamos el valor y la incrementamos
	for (variable = 2; variable <= 20; variable += 2) //Ciclo for
	continue; //Continuar y saltar lo siguiente
	printf("\nVariable = %i",variable); //Impresion del resultado
	variable = 10 + 5; //Operacion de asigancion
	printf("\nValor final de la variable = %i",variable); //Impresion del resultado
    
	return 0; //Termina el progama 
}
