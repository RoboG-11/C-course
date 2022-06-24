#include<stdio.h>
#include<stdlib.h>

void sumar(int a, int b, int c, int *s); //Cabecera.

int main(){
	int v = 5, suma;
	sumar(4,v,v*2-1, &suma); //Los primeros 3 valores son por valor y uno por referencia..
	printf("%d\n", suma);
	return 0;

}

void sumar(int a, int b, int c, int *s){
	b += 2; //b=7;
	*s = a+b+c; //*s = 4+7+9=20;
	//return (*s); //En caso de ser int.
}