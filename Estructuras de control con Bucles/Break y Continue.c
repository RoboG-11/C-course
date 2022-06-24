/*
Break y Continue

CONTINUE->Sirve para terminar una iteracion y pasar a la siguiente
BREAK->Sirve para terminar con una iteracion, y tambien con el ciclo completo
*/
#include<stdio.h>

int main(){
	
	int num, i;
	
	//CONTINUE
	printf("\tCONTINUE\n");
	printf("Ingresa el numero que sera ignorado: ");
	scanf("%i", &num);
	
	for(i = 0; i <100; i++){
		if(i == num){
			continue;
		}
		printf("%i\n", i);
	}
	
	printf("\n\n\n\n\n\n");
	
	//BREAK
	printf("\tBREAK\n");
	printf("Se rompe en el numero 5\n");
	for(i = 0; i < 100; i++){
		if(i == 5){
			break;
		}
		printf("%i\n", i);
	}
	
	return 0;
}
