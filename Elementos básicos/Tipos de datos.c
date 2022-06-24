//Tipos de datos
#include <stdio.h> //Libreria estandar (pide y regresa al usuario)

int main(){ //Funcion principal
	
	int a = 1; //Variable de tipo entera. 2 bytes, de -32768->32767
	char b = 'z'; //Variable de tipo caracter. 1 byte, de 0->255
	float c = 1.57632; //Variable de tipo flotante. 4 bytes
	double d = 15555.5555555; // 8 bytes
	short v = 2; //Variable de tipo short. 2 bytes de -128->127
	unsigned int j = 123; //Solo puede ser positivo. 2 bytes de 0->65535
	long e = 123456; //Variable de tipo long. 4 bytes
	
	printf("El valor del entero es: %i\n", a); //Imprime con el formato
	printf("El valor del char es: %c\n", b); //Imprime con el formato
	printf("El valor del flotante es: %f\n", c); //Imprime con el formato
	printf("El valor del double es: %lf\n", d); //Imprime con el formato
	printf("El valor del short es: %i\n", v); //Imprime con el formato
	printf("El valor del long es es: %li\n", e); //Imprime con el formato
	printf("El valor del unsigned es: %i", j); //Imprime con el formato
	
	return 0; //Se termina el programa
}
