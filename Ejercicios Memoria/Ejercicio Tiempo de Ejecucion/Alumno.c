#include "Alumno.h" //Se incluye el header con sus funciones

void llenarAlumno(Alumno *din); //Declaracion de la funcion

int main(){

    //Declaracion de variables
    int j;
    //printf("Tamanio de estructura ALumno: %i\n", sizeof(Alumno));
    Alumno *din1, *din2, *din3;

    //Se reserva la memoria dinamicamente
    din1 = (Alumno*)malloc(2*sizeof(Alumno));
    din2 = (Alumno*)calloc(2,sizeof(Alumno));

    printf("Primer apuntador\n");

    //Recorre la estrcutura
    for(int i = 0; i < 2; i++){
        printf("Direccion[%d]: %p\n", i, din1 + i);
    }

    printf("\n");

    printf("Segundo apuntador\n");

    //Recorre la estrcutura
    for(int i = 0; i < 2; i++){
        printf("Direccion[%d]: %p\n", i, din2 + i);
    }

    printf("\n");

    printf("Con realloc\n");

    //Se ocuoa realloc para aumentar el tamanio
    din3 = (Alumno *)realloc(din2, 4*sizeof(Alumno));

    //Recorre la estrcutura
    for(int i = 0; i < 4; i++){
        printf("Direccion[%d]: %p", i, din3 + i);
    }

    llenarAlumno(din1);
    printf("Datos del alumno");
    printf("\nNombre del alumno: %s", din1->nombre);
    printf("\nApellido del alumno: %s", din1->apellido);
    printf("\nNumero de cuenta: %d", din1->numCuenta);
    printf("\nPromedio del alumno: %.2f", din1->promedio);

    //Se libera la memoria dinamica
    free(din1);
    free(din2);
    free(din3);

    return 0;
}

//Funcion para llenar los alumnos
void llenarAlumno(Alumno *din){
    printf("Llena los datos del alumno\n");
    printf("\nEscribe su nombre: ");
    fflush(stdin);
    scanf("%s", din->nombre);
    printf("\nEscribe el apellido: ");
    fflush(stdin);
    scanf("%s", din->apellido);
    printf("\nEscribe su numero de cuenta: ");
    fflush(stdin);
    scanf("%d", &din->numCuenta);
    printf("\nEscribe su promedio: ");
    fflush(stdin);
    scanf("%f", &din->promedio);

    crearAlumno(din->numCuenta, din->nombre, din->apellido, din->promedio);
    imprimirAlumno(*din);
}