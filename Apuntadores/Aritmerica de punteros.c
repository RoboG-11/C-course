/*
Aritmerica de punteros

a) Agrega instrucciones para imprimir el valor de a, b y c.
b) Indica cuales son los indices del arreglo que se almacenan en las variables
   a, b y c.
c) Utilizando el apuntador y solo un ciclo, recorre el arreglo de tal manera
   que se modifiquen todos sus valores de la siguiente manera: plano 0 con valores
   multiplos de 4 (4, 8, 12, 16..), plano 1 con valores multiplos de 6 (6, 12, 18...),
   plano 2 con valores multiplos de 7 (7, 14, 21, 28...) y el plano 3 con valores
   multiplo de 5 (5, 10, 15, 20...).
*/
#include<stdio.h> //Libreria de entrada y salida

int arr1[4][5][2]; //Declaracion de array global
int *point; //Declaracion de puntero global
int l, m, n, a, b, c, var, cont; //Declaraciones de varaibles globales

int main(){ //Funcion principal
	
	point = &arr1[0][0][0]; //Apuntador al inicio del array
	var = 1; //Inicializacion de variable
	
	//Ciclo que recorre todo el array
	for(l = 0; l < 4; l++){ //Recorre las dimensiones
		for(m = 0; m < 5; m++){ //Recorre los renglones
			for(n = 0; n < 2; n++){ //Recorre las columnas
				arr1[l][m][n] = var; //Asignacion del valor de la variable
				var += 2; //Aumento de dos en dos cada iteracion
			}
		}
	}
	
	//Aritmetica de apuntadores
	a = *(point + 4); //El apuntador se RECORRE CUATRO POCISIONES
	b = *(point + 16); //El apuntador se RECORRE DIESISEIS POCISIONES
	c = *(point + 23); //El apuntador se RECORRE VEINTITRES POCISIONES
	
	//a) Agrega instrucciones para imprimir el valor de a, b y c.
	
	printf("El valor de 'a' es: %i", a); //Impresion del resultado del array con puntero
	printf("\nEl valor de 'b' es: %i", b); //Impresion del resultado del array con puntero
	printf("\nEl valor de 'c' es: %i", c); //Impresion del resultado del array con puntero
	printf("\n\n"); //Salto de linea doble
	
	//b) Indica cuales son los indices del arreglo que se almacenan en las variables
	//a, b y c.
	
	//Ciclo que recorre todo el array
	for(l = 0; l < 4; l++){ //Recorre las dimensiones
		for(m = 0; m < 5; m++){ //Recorre los renglones
			for(n = 0; n < 2; n++){ //Recorre las columnas
				printf("[%d]", arr1[l][m][n]); //Impresion del array en la posicion
			}
			printf("\n"); //Salto de linea
		}
		printf("\n"); //Salto de linea
	}
	
	//c) Utilizando el apuntador y solo un ciclo, recorre el arreglo de tal manera
	//que se modifiquen todos sus valores de la siguiente manera: plano 0 con valores
	//multiplos de 4 (4, 8, 12, 16..), plano 1 con valores multiplos de 6 (6, 12, 18...),
	//plano 2 con valores multiplos de 7 (7, 14, 21, 28...) y el plano 3 con valores
	//multiplo de 5 (5, 10, 15, 20...).
	
	point = &arr1[0][0][0]; ///Apuntador al inicio del array
	
	for(cont = 0; cont < 40; cont++){ //Unico for que recorre todo el array
		
		if(cont < 10){ //Condicion donde entran las primeras diez pocision
			*(point + cont) = 4*(cont + 1); //Multiplicacion del array por cuatro
		}if(cont >= 10 && cont < 20){ //Condicion donde entran las pocisiones del diez al veintye
			*(point + cont) = 6*(cont - 9); //Multiplicacion del array por seis
		}if(cont >= 20 && cont < 30){ //Condicion donde entran las posiciondes del veinte al treintra
			*(point + cont) = 7*(cont - 19); //Multiplicacion del array por siete
		}if(cont >= 30 && cont < 40){ //Condicion donde entran las pocisiones del treinta al cuarenta
			*(point + cont) = 5*(cont - 29); //Multiplicacion del array por cinco
		}
		
	}
	
	printf("\nEl arreglo queda de esta manera...\n\n"); //Formato
	
	//Ciclo que recorre todo el array
	for(l = 0; l < 4; l++){ //Recorre las dimensiones
		for(m = 0; m < 5; m++){ //Recorre los renglones
			for(n = 0; n < 2 ; n++){ //Recorre las columnas
				printf("[%i]", arr1[l][m][n]); //Impresion del arry por pocision
			}
			printf("\n"); //Salto de linea
		}
		printf("\n"); //Salto de linea
	}
	
	return 0; //Se termina el programa
	
}
