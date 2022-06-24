/*
Manejo de archivos

	PARAMETRO	SIGNIFICA ABRIR EL ARCHIVO EN MODO
	    r		Lectura. El archivo debe de existir
	    w		Escritura. Si el archivo no existe, se crea. Si existe, se sobrescribe
	    a		Escritura al final del documento. Si no existe, se crea
	    rb		Binario. Para lectura
	    r+		Lectura y escritura. El archivo debe de existir
	    w+		Crea un archivo para escritura. Si existe se sobrescribe
	    rb+		Binario. Para actualizacion (Lectura y escritura)
	    
fputc(caracter, apuntadorArchivo), es una funcion que nos permre escribir
un caracter en el archivo, regresa el caracter que se presionó en caso de
que la operacion se realice con exito o EOF (Final Del Archivo) si falló.
El apuntador es el que nos brinda la funcion fopen.

fclose(apuntadorArchivo), guarda los cambios en el archivo, cierra la
conexion y libera los recursos usados por el apuntador
*/
#include<stdio.h>

int main(){
	
	printf("Manejo de archivos");
	
	return 0;
	
}
