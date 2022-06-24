//Leer lineaxlinea
#include <stdio.h>
#include <string.h>

#define NOMBRE_ARCHIVO "archivo.txt"
#define LONGITUD_MAXIMA_CADENA 1000

int main(){
    
    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt";
    
	FILE *archivo = fopen(direccion, "r"); // Modo lectura
    char bufer[LONGITUD_MAXIMA_CADENA];         // Aquí vamos a ir almacenando cada línea
    
    while (fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo)){
        // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        strtok(bufer, "\n");
        // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        printf("La linea es: '%s'\n", bufer);
    }
    
    fclose(archivo); //Se cierra el archivo
    
    return 0;
}
