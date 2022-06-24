//Bibliotecas 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Declaracion de estructuras
typedef struct Direccion{
    char calle[20];
    int num;
    char colonia[20];
    int codPostal;
}Direccion;

typedef struct Alumno{
    int numCuenta;
    char nombre[20];
    char apellido[20];
    float promedio;
    Direccion domicilio;
}Alumno;

//Declaracion de funciones
Alumno crearAlumno(int, char*, char*, float);
void imprimirAlumno(Alumno);

//Funciones
Alumno crearAlumno(int numCuenta, char* nombre, char* apellido, float promedio){

    //Accediendo a la estructura
    Alumno alumnoCreado;
    alumnoCreado.numCuenta = numCuenta;
    strcpy(alumnoCreado.nombre, nombre);
    strcpy(alumnoCreado.apellido, apellido);
    alumnoCreado.promedio = promedio;

    return alumnoCreado;
}

void imprimirAlumno(Alumno alumnoPrint){

    printf("Numero de cuenta: %d\n", alumnoPrint.numCuenta);
    printf("Nombre: %s\n", alumnoPrint.nombre);
    printf("Apellido: %s\n", alumnoPrint.apellido);
    printf("Promedio: %.2f\n", alumnoPrint.promedio);
    
}