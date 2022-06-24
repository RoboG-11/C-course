//Tomar el archivo de texto(.txt) creado anteriormente y con la función fgetc() leer todo su contenido fgetc(*p);

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador al archivo

int main(){ //Función principal

    int c;
    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt";

    fd = fopen(direccion, "rt"); //Se abre el archivo. rt lee el texto (read text)

    if(fd == NULL){//Si no se encuentra el archivo
        printf("Error al tratar de leer el archivo");
        return -1;
    }

    while((c = fgetc(fd)) != EOF){ //Mientras c sea diferente al final del archivo
        if(c == '\n'){ //Si c es un salto de linea
            printf("\n");
        }else{ //De lo contrario
            putchar(c);
        }
    }

    fclose(fd); //Se cierra el archivo

    return 0; //Se termina el programa
}
