//Crear un archivo de texto (.txt), donde guarde los emails de amigos
//fprintf(puntero, informacion)
//fwrite(dato a guardar, tama�o, lomgitud, puntero);

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

int main(){ //Funcion principal

	//Declaracion de variables
	char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Ejercicios de Archivos\\emails.txt";
	char rpt;
	
	//El apuntador al archivo lo igualamos a fopenn
	fd = fopen(direccion, "wt"); //wt = escribir texto(write text). Elimina lo del archivo del tezto
	
	if(fd == NULL){ //Condicion de fallo
		printf("Error al tratar de localizar el archivo");
		return 1;
	}
	
	printf("Agregarndo mas contacto de email.\n"); //Impresion de pantalla
	fprintf(fd, "Emails de amigos");
	
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
	
	return 0; //Se termina el programa
	
}
