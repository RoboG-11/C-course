/*
Contador de vocal por vocal

Pedir una cadena de caracteres al usuario, e indicar cuantas veces aparece
la vocal a, e, i, o, u; en la cadena de caracteres.
*/
#include<stdio.h> //Libreria de entrada y salida

int vocalA(char *); //Declaracion de funcion
int vocalE(char *); //Declaracion de funcion
int vocalI(char *); //Declaracion de funcion
int vocalO(char *); //Declaracion de funcion
int vocalU(char *); //Declaracion de funcion

int main(){ //Funcion principal
	
	char palabra[50]; //Declaracion de array
	
	printf("Ingrese una palabra: "); //Solicitud de dato
	scanf(" %[^\n]", &palabra); //Se guarda en el array
	
	printf("\nLa vocal 'a' aparece: %i veces", vocalA(palabra)); //Impresion del resultado llamando a la funcion
	printf("\nLa vocal 'e' aparece: %i veces", vocalE(palabra)); //Impresion del resultado llamando a la funcion
	printf("\nLa vocal 'i' aparece: %i veces", vocalI(palabra)); //Impresion del resultado llamando a la funcion
	printf("\nLa vocal 'o' aparece: %i veces", vocalO(palabra)); //Impresion del resultado llamando a la funcion
	printf("\nLa vocal 'u' aparece: %i veces", vocalU(palabra)); //Impresion del resultado llamando a la funcion
	
	return 0; //Se termina el programa
	
}

int vocalA(char *s){ //Funcion que cuenta las vocales A
	
	int cont=0; //Declaracion de variable contadora
	while(*s){ //Ciclo mientras 's' no sea nulo (\0)
		switch(*s){ //Switch con condicion
			case 'a': //Opcion de la vocal
			cont++; //Aumenta el valor del contador
		}
		s++; //Se va recorriendo el array
	}
	 
	return cont; //Se regresa el valor obtenido de la vocal
	
}

int vocalE(char *s){ //Funcion que cuenta las vocales E
	
	int cont=0; //Declaracion de variable contadora
	while(*s){ //Ciclo mientras 's' no sea nulo (\0)
		switch(*s){ //Switch con condicion
			case 'e': //Opcion de la vocal
			cont++; //Aumenta el valor del contador
		}
		s++; //Se va recorriendo el array
	}
	
	return cont; //Se regresa el valor obtenido de la vocal
		
}

int vocalI(char *s){ //Funcion que cuenta las vocales I
		
	int cont=0; //Declaracion de variable contadora
	while(*s){ //Ciclo mientras 's' no sea nulo (\0)
		switch(*s){ //Switch con condicion
			case 'i': //Opcion de la vocal 
			cont++; //Aumenta el valor del contador
		}
		s++; //Se va recorriendo el array
	}
	
	return cont; //Se regresa el valor obtenido de la vocal
	
}

int vocalO(char *s){ //Funcion que cuenta las vocales O
		
	int cont=0; //Declaracion de variable contadora
	while(*s){ //Ciclo mientras 's' no sea nulo (\0)
		switch(*s){ //Switch con condicion
			case 'o': //Opcion de la vocal 
			cont++; //Aumenta el valor del contador
		}
		s++; //Se va recorriendo el array
	}
	
	return cont; //Se regresa el valor obtenido de la vocal
	
}

int vocalU(char *s){ //Funcion que cuenta las vocales U
		
	int cont=0; //Declaracion de variable contadora
	while(*s){ //Ciclo mientras 's' no sea nulo (\0)
		switch(*s){ //Switch con condicion
			case 'u': //Opcion de la vocal 
			cont++; //Aumenta el valor del contador
		}
		s++; //Se va recorriendo el array
	}
	
	return cont; //Se regresa el valor obtenido de la vocal
	
}
