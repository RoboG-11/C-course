//Entrada y salidas
#include<stdio.h> //Libreria estandar (pide y regresa al usuario)

int main(){ //Funcion principal
	
	int a; //Declaramos variable de tipo entera
	float b; //Declaramos variable de tipo flotante
	char c; //Declaramos variable de tipo caracter
	char d[40]; //Declaramos un arreglo de 40 espacios
	
	//printf->PrintFile
	//scanf->ScanFile
	printf("Escribe el valor de la variable entera\n"); //Pedimos al usuario
	scanf("%i", &a); //Escanea lo ingresado. '&' guarda en direccion de memoria
	printf("Escribe el valor de la variable flotante\n"); //Pedimos al usuario
	scanf("%f", &b); //Escanea lo ingresado. '&' guarda en direccion de memoria
	printf("Escribe el valor de la variable char\n"); //Pedimos al usuario
	scanf("%s", &c); //Escanea lo ingresado. '&' guarda en direccion de memoria
	printf("Ingresa tu nombre\n"); //Pedimos al usuario
	scanf(" %[^\n]", &d); //Escanea lo ingresado. '&' guarda en direccion de memoria
	
	printf("\nEl valor de la variable entera es: %i\n", a); //Imprime lo guardado
	printf("El valor de la variable flotante es: %.3f\n", b); //Imprime lo guardado
	printf("El valor de la variable char es: %c\n", c); //Imprime lo guardado
	printf("Bienvenido: %s", d); //Imprime lo guardaddo
	
	return 0; //Termina el programa
}
