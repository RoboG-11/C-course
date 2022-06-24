/*Getchar-Putchar
 *Utilizar las funciones getchar() y putchar() para leer e imprime un string
 *
 *getchar();
 *Se utiliza para leer caracter a caracter. La llamada a getchar() devuelve el
 *caracter siguiente del flujo de entrada stdin. En caso de error o de encontrar
 *el fin del archivo, devuelve EOF (macro definida por stdio.h)
 *
 *putchar();
 *Se utiliza para escribir en la salida (stdout) caracter a caracter que se escribe es
 *el transmitido como argumento
 */
 
#include<stdio.h> //Libreria de entrada y salida

int main(){ //Función principal
	
	int c; //Declaracion de variable
	
	while(EOF != (c = getchar())){ //Mientras c no haya llegado al final
		putchar(c); //Imprime caracter a caracter
	}
	
	return 0; //Se termina el programa
	
}
