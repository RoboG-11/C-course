//Hacer un programa en C para guardar direcciones de correo, que muestre un menu con
//las siguientes opciones:
//1. Crear(nombre, apellidos, email)
//2. Agregar mas contactos(nombre, apellidos, email)
//3. Visualizar contactos existentes

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar
#include<string.h> //Libreria de string

FILE *fd; //Apuntador a archivo

//Estructura para guardar los datos del usuario
struct datosPersonales{ 
	char nombre[20];
	char apellido[20];
	char email[30];
}datos;

void crear(){ //Funcion principal

	//Declaracion de variables
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\emails.txt";
	char rpt;
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "wt"); //wt = escribir texto(write text). Elimina lo del archivo del tezto
	
	if(fd == NULL){ //Condicion de fallo
		printf("Error al tratar de localizar el archivo");
	}
	
	printf("\nCreando Directorio de Email");
	fprintf(fd, "\tDireccion de Email");
	
	//Bucle do-while
	do{
		fflush(stdin); //Limpia el buffer
		
		//Ingreso y escaneo de datos del usuario
		printf("Nombre: ");
		scanf(" %[^\n]", &datos.nombre);
		printf("\nApellidos: ");
		scanf(" %[^\n]", &datos.apellido);
		printf("\nEmail: ");
		scanf(" %[^\n]", &datos.email);
		
		//Se escribe en el archivo los datos escaneados 
		fprintf(fd, "\n\nNombre: "); //Imprimir en el archivo apuntado
		fwrite(datos.nombre, 1, strlen(datos.nombre), fd); //Se escribe lo almacenado en el archivo con su longitud
		fprintf(fd, "\nApellidos: "); //Imprime en el archivo
		fwrite(datos.apellido, 1, strlen(datos.apellido), fd); //Se escribe lo almacenado en el archivo con su longitud
		fprintf(fd, "\nEmail: "); //Imprime en el archivo
		fwrite(datos.email, 1, strlen(datos.email), fd); //Se escribe lo almacenado en el archivo con su longitud
		
		printf("\n\nDesea seguir guardando mas contactos? (si = s, no = n): "); //Impresion en pantalla
		scanf("%s", &rpt); //Se escanea lo ingresado 
		
	}while(rpt == 's'); //Condicion de repeticion
	
	fclose(fd); //Se cierra el archivo pase lo que pase
	
}
	
void agregar(){
	
	//Declaracion de variables
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\emails.txt";
	char rpt;
		
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "at"); //at = add text - agregar texto sin eliminar
		
	if(fd == NULL){ //Condicion de fallo
	printf("Error al tratar de localizar el archivo");
	}
		
		//Bucle do-while
	do{
		fflush(stdin); //Limpia el buffer
		
		//Ingreso y escaneo de datos del usuario
		printf("Nombre: ");
		scanf(" %[^\n]", &datos.nombre);
		printf("\nApellidos: ");
		scanf(" %[^\n]", &datos.apellido);
		printf("\nEmail: ");
		scanf(" %[^\n]", &datos.email);
		
		//Se escribe en el archivo los datos escaneados 
		fprintf(fd, "\n\nNombre: "); //Imprimir en el archivo apuntado
		fwrite(datos.nombre, 1, strlen(datos.nombre), fd); //Se escribe lo almacenado en el archivo con su longitud
		fprintf(fd, "\nApellidos: "); //Imprime en el archivo
		fwrite(datos.apellido, 1, strlen(datos.apellido), fd); //Se escribe lo almacenado en el archivo con su longitud
		fprintf(fd, "\nEmail: "); //Imprime en el archivo
		fwrite(datos.email, 1, strlen(datos.email), fd); //Se escribe lo almacenado en el archivo con su longitud
	
		printf("\n\nDesea seguir guardando mas contactos? (si = s, no = n): "); //Impresion en pantalla
		scanf("%s", &rpt); //Se escanea lo ingresado 
		
	}while(rpt == 's'); //Condicion de repeticion
	
	fclose(fd); //Se cierra el archivo pase lo que pase
	
}

void visualizar(){
	
	//Declaracion de variables
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\emails.txt";
	char c;
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "r"); //r = read - leer texto
	
	if(fd == NULL){ //Condicion de fallo
	printf("Error al tratar de localizar el archivo");
	}
	
	printf("\nVisualizando contactos.\n"); //Impresion en pantalla
	
	while((c = fgetc(fd)) != EOF){
		if(c == '\n'){
			printf("\n"); //Impresion de salto de linea
		}else{
			putchar(c);
		}
	}
	
	printf("\n\n"); //Sato de linea
	
	fclose(fd); //Se cierra el archivo pase lo que pase
	
}

int main(){ //Funcion principal
	
	//Declaracion de variable
	int option; 
	
	//Bucle do-while
	do{
		//Impresion de pantalla
		printf("\tMENU");
		printf("\n1. Crear");
		printf("\n2. Agregar mas contactos");
		printf("\n3. Visualizar contactos existentes");
		printf("\n4. Salir");
		printf("\n\nOpcion: ");
		scanf("%i", &option);
		
		//Switch del menu
		switch(option){
			case 1:
				crear(); //Llama a la funcion
				break;
			case 2:
				agregar(); //Llama a la funcion
				break;
			case 3:
				visualizar(); //Llama a la funcion
				break;
		}
		
	}while(option != 4); //Condicion de salir del bucle
	
	fclose(fd); //Se cierra el archivo pase lo que pase
	
	return 0; //Se termina el programa 
	
}
