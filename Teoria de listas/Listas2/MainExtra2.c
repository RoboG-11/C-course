/*main de la lista simple main_listaS.c*/

//typedef int TipoDato;
#include "listas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ //Función principal
	
	//Declaración de variables
	int option=1;
	ListaS *p;
	Nodo *ele1,ele2;
	p=crear_ListaS();

	//Bucle del menu
	while(option != 5){
		//system("cls"); //No supe donde ponerlo XD
		printf("\nBienvenido yo soy Yatsiri\n");
		printf("\n1- Agregar un n%cmero\n", 163);
		printf("\n2- Quitar un n%cmero\n", 163);
		printf("\n3- Vaciar la lista\n");
		printf("\n4- Imprimir la lista\n");
		printf("\n5- Salir o Terminar\n");
		printf("\nSelecciona una Opcion: ");
		scanf("%d",&option);

		switch(option){
			case 1:{
				int numero = {-1};
				while(1){
					printf("\nIngrese un n%cmero entero entre 1 y 20 para agregar a la lista (0 para salir): ",163);
					scanf("%d",&numero);
					if(numero == 0) break;
					Nodo* newNodo = crear_Nodo(crear_Alumno(numero));
					int cantidadNodos = cantidad_nodos(p);
					printf("Cantidad: %d\n", cantidadNodos);

					if(cantidadNodos == 0){ //vacia
						insertar_cabeza(p, newNodo);
						continue;
					}

					if(cantidadNodos == 1){ //solo 1 elemento
						if(numero < p->cabeza->datos->id){
							insertar_cabeza(p, newNodo);
						}
							
						else{
							insertar_cola(p, newNodo);
						}
							
						continue;
					}
					
					//2 o mas elementos
					Nodo* cola = p->cabeza;
					while(cola->sig != NULL)
						cola = cola->sig;
					
					if(numero < p->cabeza->datos->id){
						insertar_cabeza(p, newNodo);
						continue;
					}

					else if(numero > cola->datos->id){
						insertar_cola(p, newNodo);
						continue;
					}
					
					Nodo* nodoIterador = p->cabeza;
					Nodo* lastNodoIterador = nodoIterador;
					
					while(nodoIterador != NULL){
						if(nodoIterador->datos->id > numero && lastNodoIterador->datos->id < numero){
							insertar_enmedio(p, lastNodoIterador, newNodo);
							break;
						}
						lastNodoIterador = nodoIterador;
						nodoIterador = nodoIterador->sig;
					}				
				}
				break; //case 1 break
			}

			case 2:{
				int numero=0;
				printf("\nDame el n%cmero entero entre 1 y 20 que quieres eliminar de la lista: ", 163);
				scanf("%d",&numero);
				ele1=crear_Nodo(crear_Alumno(numero));
				quitar_enmedio(p, ele1);
				break;
			}

			case 3:{
				vaciarLista(p);
				break;
			}

			case 4:{
				printLista(p);
				break;
			}

			default:{
				printf("\nGracias por usar este programa. Salud2\n\n");
				vaciarLista(p);
				system("pause");
				break;
			}
		}
		printf("\n\n"); //Salto de linea para el formato
	}

	//liberar mis apuntador
	free(p);
	free(ele1);
	
	return(0); //Se termina el programa
}