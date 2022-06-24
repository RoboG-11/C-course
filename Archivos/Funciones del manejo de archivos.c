/*
Funciones del manejo de archivos

	NOMBRE		FUNCION
	fopen()		Abre un archivo
	fclose()	Cierra un archivo
	fgets()		Lee una cadena de un archivo
	fputs()		Escribe una cadena en un archivo
	fseek()		Busca un byte especifico de un archivo
	fprintf()	Escribe una salida con formato en el archivo
	fscanf()	Una entrada con formato desde el archivo
	feof()		Devuelve cierto si se llega al final del archivo
	ferror()	Devuelve cierto si se produce un error
	rewind()	Coloca el localizador de posicion del archivo al principio del mismo
	remove()	Borra un archivo
	fflush()	Vacia un archivo
	
Hay DOS tipos de archivos: de TEXTO y BINARIOS

Un archivo de TEXTO es una secuencia de caracteres organizados en lineas
terminadas por un caracter de nueva linea. En estos archivos se pueden 
almacenar canciones, fuentes de programas, base de datos simples, etc.
Los archivos de texto se caracterizan por ser planos, es decir, todas
las letras tienen el mismo formato y no hay palabra subratadas, en negrias
o letras de distinto tamaño o ancho.

Un archivo BINARIO es una secuencia de bytes que tienen una correspondencia
uno a uno con el dispositivo externo.Asi que no tendrá lugar ninguna 
traduccion de caracteres.
Ademas, el numero de bytes escritos (leidos) será el mismo que los 
encontrados en el dispositivo externo. Ejemplo de estos archivos son: 
fotografias, imagenes, textos con formatos, archivos ejecutables 
(aplicaciones), etc.
*/
#include<stdio.h>

int main(){
	
	printf("Funciones del manejo de archivos");
	
	return 0;
	
}
