/*
Suma de n numeros
Suma de los n primeros numeros
*/
#include<stdio.h>

int main(){
	
	int i=1, suma=0, num;
	
	printf("Ingrese la cantidad de numeros a sumar: ");
	scanf("%i", &num);
	
	while(i <= num){
		suma = suma + i;
		i++;
	}
	
	printf("La suma es: %i", suma);
	
	return 0;
	
}
