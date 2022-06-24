/*
Arreglos de estructuras con alumnos

Crear la estructura asignatura. Agregar a la estructura alumno a un arreglo de
asignaturas(5), e inicializar alumnos(2) con sus respectivas materias(3). Permitir
al usuario ver las materias, modificarlas. Y Permitirle al usuario crear alumnos
con sus materias desde cero
*/
#include<stdio.h> //Libreria de entrada y salida
#include<string.h> //Libreria con funciones de strings

typedef struct asignatura{ //Declaracion de una estructura
	char materia[30]; //Declaracion de un array
}asignatura;

typedef struct alumno{ //Declaracion de una estructura
	asignatura asignaturas[5]; //Declaracion de un array
}alumno;

void imprimirMaterias(alumno alumnoImpresion); //Declaracion de una funcion
void sustituirMateria(alumno *alumnoModificacion, int indice); //Declaracion de una funcion

int main(){ //Funcion principal
	
	alumno nuevo; //Creacion de nuevo alumno
	char alumnoNuevo[20]; //Declaracion de un array
	int bucle = 1; //Declaracion de una variable
	int option; //Declaracion de una variable 
	int alumnoSelec; //Declaracion de una variable
	
	alumno Jorge; //Creacion de nuevo alumno
	strcpy(Jorge.asignaturas[0].materia, "Matematicas"); //Asigancion a la estructura
	strcpy(Jorge.asignaturas[1].materia, "Fisica"); //Asigancion a la estructura
	strcpy(Jorge.asignaturas[2].materia, "Quimica"); //Asigancion a la estructura
	
	alumno Juan; //Creacion de nuevo alumno
	strcpy(Juan.asignaturas[0].materia, "Musica"); //Asigancion a la estructura
	strcpy(Juan.asignaturas[1].materia, "Ingles"); //Asigancion a la estructura
	strcpy(Juan.asignaturas[2].materia, "Programacion"); //Asigancion a la estructura
	
	printf("Este programa permite ver las materias, modificarlas y crear alumnos"); //Formato
	
	while(bucle){ //Ciclo con condicion
		printf("\nQue quieres hacer?");  //Formato
		printf("\n1) Ver materias"); //Formato
		printf("\n2) Modificar las materias"); //Formato
		printf("\n3) Crear alumnos desde cero con sus materias"); //Formato
		printf("\n4) Salir"); //Formato
		printf("\nSelecciona la opcion que desees: "); //Solicitud de datos
		scanf("%i", &option); //Escaneo y guardado de lo ingresado
		
		switch(option){ //Menu
			case 1: //Opcion 1
				printf("\nSeleccionaste ver materias"); //Formato
				printf("\n1) Jorge"); //Formato
				printf("\n2) Juan"); //Formato
				//printf("\n3) Nuevo alumno: %s", alumnoNuevo);
				printf("\nDe que alumno quieres ver materias?: "); //solicitud de datos
				scanf("%i", &alumnoSelec); //Escaneo y guardado de lo ingresado
				
				switch(alumnoSelec){
					case 1: //Opcion 1
						printf("\nSeleccionaste al alumno Jorge"); //Formato
						imprimirMaterias(Jorge); //Llama a la funcion
						break; //Rompe con el ciclo y la opcion
					case 2: //Opcion 2
						printf("\nSeleccionaste al alumno Juan"); //Formato
						imprimirMaterias(Juan); //Llama a la funcion
						break; //Rompe con el ciclo y la opcion
					/*case 3: //Opcion 3
						printf("\nSeleccionaste al alumno %s", alumnoNuevo); 
						imprimirMaterias(&alumnoNuevo);
						break;*/
				}
				break;
			case 2: //Opcion 
				printf("\nSeleccionaste modificar las materias"); //Formato
				printf("\n1) Jorge"); //Formato
				printf("\n2) Juan"); //Formato
				printf("\nDe que alumno quieres modificar las materias?: "); //Solicitud de datos
				scanf("%i", &option); //Escaneo y guardado
				
				switch(option){ //Menu
					case 1: //Opcion 1
						printf("\nSeleccionaste al alumno Jorge"); //Formato
						imprimirMaterias(Jorge); //Llama a la funcion
						printf("\nSelecciona el numero de la materia que quieres modificar: "); //Solicitud de datos
						scanf("%i", &alumnoSelec); //Escaneo y guardado de lo ingresado
						
						switch(alumnoSelec){ //Menu
							case 1: //Opcion 1
								printf("\nSeleccionaste la materia %s", Jorge.asignaturas[0].materia); //Impresion de la estructura
								sustituirMateria(&Jorge, 0); //Llama a la funcion con apuntador
								break;  //Rompe con el ciclo y la opcion
							case 2: //Opcion 2
								printf("\nSeleccionaste la materia %s", Jorge.asignaturas[1].materia); //Impresion de la estructura
								sustituirMateria(&Jorge, 1); //Llama a la funcion con apuntador
								break; //Rompe con el ciclo y la opcion
							case 3: //Opcion 3
								printf("\nSeleccionaste la materia %s", Jorge.asignaturas[2].materia); //Impresion de la estructura
								sustituirMateria(&Jorge, 2); //Llama a la funcion con apuntador
								break; //Rompe con el ciclo y la opcion
						}
						break; //Rompe con el ciclo y la opcion
					case 2: //Opcion 2
						printf("\nSeleccionaste al alumno Juan"); //Formato
						imprimirMaterias(Juan); //Llama a la funcion
						printf("\nSelecciona el numero de la materia que quieres modificar: "); //Solicitud de datos
						scanf("%i", &alumnoSelec); //Escaneo y gurdado de lo ingresado 
						
						switch(alumnoSelec){ //Menu
							case 1: //Opcion 1
								printf("\nSeleccionaste la materia %s", Juan.asignaturas[0].materia); //Impresion de la estructura
								sustituirMateria(&Juan, 0); //Llama a la funcion con apuntador
								break; //Rompe con el ciclo y la opcion
							case 2: //Opcion 2
								printf("\nSeleccionaste la materia %s", Juan.asignaturas[1].materia); //Impresion de la estructura
								sustituirMateria(&Juan, 1); //Llama a la funcion con apuntador
								break; //Rompe con el ciclo y la opcion
							case 3: //Opcion 3
								printf("\nSeleccionaste la materia %s", Juan.asignaturas[2].materia); //Impresion de la estructura
								sustituirMateria(&Juan, 2); //Llama a la funcion con apuntador
								break; //Rompe con el ciclo y la opcion
						}
						break; //Rompe con el ciclo y la opcion
				}
				break; //Rompe con el ciclo y la opcion
			case 3: //Opcion 3
				printf("\nSeleccionaste crear alumno"); //Formato
				printf("\nEscribe el nombre del nuevo alumno: "); //Ingreso de datos
				scanf(" %[^\n]", &alumnoNuevo); //Escaneo y guardado de lo ingresado
				
				printf("\nEscribe el nombre de las tres materias para el alumno %s: ", alumnoNuevo); //Ingreso de datos
				scanf("%s", nuevo.asignaturas[0].materia); //Escaneo y guardado de lo ingresado en las estructuras
				scanf("%s", nuevo.asignaturas[1].materia); //Escaneo y guardado de lo ingresado en las estructuras
				scanf("%s", nuevo.asignaturas[2].materia); //Escaneo y guardado de lo ingresado en las estructuras
				
				printf("\nEl alumno %s tiene estas materias \n", alumnoNuevo); //Formato
				imprimirMaterias(nuevo); //Llamado de la funcion
				break; //Rompe con el ciclo y la opcion
				
			case 4: //Opcion 4
				printf("\nGracias por usar el programa :)"); //Formato
				bucle = 0; //Cambio del valor en el bucle para terminar
				break; //Rompe con el ciclo y la opcion
				
			default: //Opcion default
				printf("\nOpcion no valida\n"); //Formato
				break; //Rompe con el ciclo y la opcion
		}
	}
	
	return 0; //Se termina el programa
	
}

void imprimirMaterias(alumno alumnoImpresion){ //Funcion que iprime las materias
	printf("\nSus materias son: "); //Formato
	printf("\nLa materia 1) %s", alumnoImpresion.asignaturas[0].materia); //Imprime la materia de la estructura
	printf("\nLa materia 2) %s", alumnoImpresion.asignaturas[1].materia); //Imprime la materia de la estructura
	printf("\nLa materia 3) %s\n", alumnoImpresion.asignaturas[2].materia); //Imprime la materia de la estructura
}

void sustituirMateria(alumno *alumnoModificacion, int indice){ //Funcion que cambia la materia
	//printf("Seleccionaste la materia %s", Jorge.asignaturas[0].materia);
	printf("\nEscribe el nombre de la nueva materia: "); //Solicitud de datos
	char materiaNueva[20]; //Declaracion de un array
	scanf(" %[^\n]", &materiaNueva); //Escaneo y guardado de lo ingresado
	strcpy(alumnoModificacion->asignaturas[indice].materia, materiaNueva); //Funcion de copiado en el array con apuntador en la estructura
}
