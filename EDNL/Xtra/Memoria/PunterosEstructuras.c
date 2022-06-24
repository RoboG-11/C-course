#include<stdio.h>
#include<stdlib.h>

//Declaramos la estructura "fecha."
struct fecha{
    unsigned int dd; //día.
    unsigned int mm; //Mes.
    unsigned int aa; //Anio.
};

void escribir(struct fecha *f); //Cabecera de funciones

int main(){
   struct fecha *hoy; //Puntero de la estructura fecha. 

    hoy = (struct fecha *)malloc(sizeof(struct fecha)); //Asignamos el bloque de memoría para la estructura.
    
//El tamaño exacto de un solo entero X=sizeof(int)
//El tamaño exacto de un solo flotante X=sizeof(float)
//El tamño exacto de un solo elemento de tipo o struct fecha es sizeof(struct fecha)

    //(tipo *)malloc(tamaño exacto en bytes);
    
    printf("\"Introducir fecha (dd-mm-aa)\"\n");
    
    printf("Introduce el dia: "); //Mensaje para el usuario.
    scanf("%u", &hoy->dd); //Accedemos al campo al que hace referencia el puntero, en este caso, introduciendo de manera dinamica el día.
    
    printf("Introduce el numero de mes: "); //Mensaje para el usuario.
    scanf("%u", &hoy->mm); //Accedemos al campo al que hace referencia el puntero, en este caso, introduciendo de manera dinamica el mes.
    
    printf("Introduce el anio: "); //Mensaje para el usuario.
    scanf("%u", &hoy->aa); //Accedemos al campo al que hace referencia el puntero, en este caso, introduciendo de manera dinamica el año.
    
    escribir(hoy); //Llamamos a la funcion escribir y como parametro utiliza el puntero hoy, haciedo que pasen lsos datos que se introdujeron anteriormente.
    
    free(hoy);
    printf("dd %d",hoy->dd);
    hoy=NULL;

    if(hoy == NULL){
        printf("\nLa memoria se libero correctamente\n");
    }
    else {
        printf("\nLa memoria no se ha liberado");
    }
    // printf("dd1 %d",hoy->dd);
    //system("pause");
    return (0);
}



void escribir(struct fecha *f){ //Funcion de tipo void, puntero de tipo fecha como parametro.
    printf("Dia %u del mes %u del anio %u\n", f->dd,f->mm,f->aa); //Impresion del mensaje usando el operador flecha para acceder al campo que hace referencia el puntero. 
}