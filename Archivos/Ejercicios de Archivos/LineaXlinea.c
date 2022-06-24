//Leer lineaxlinea
#include <stdio.h>
#include <string.h>

#define NOMBRE_ARCHIVO "archivo.txt"
#define LONGITUD_MAXIMA_CADENA 1000

int main(){
    
    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt";
    
	FILE *archivo = fopen(direccion, "r"); // Modo lectura
    char bufer[LONGITUD_MAXIMA_CADENA];         // Aqu� vamos a ir almacenando cada l�nea
    
    while (fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo)){
        // Aqu�, justo ahora, tenemos ya la l�nea. Le vamos a remover el salto
        strtok(bufer, "\n");
        // La imprimimos, pero realmente podr�amos hacer cualquier otra cosa
        printf("La linea es: '%s'\n", bufer);
    }
    
    fclose(archivo); //Se cierra el archivo
    
    return 0;
}
