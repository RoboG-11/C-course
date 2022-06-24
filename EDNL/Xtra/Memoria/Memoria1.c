#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
int main(){

    char *cadenita;
    char cadena[10];
    int tamCadenita;

    printf("\nIntroduce una cadena de caracteres: ");
    gets(cadena);

    tamCadenita = strlen(cadena);
    cadenita = (char*)malloc((tamCadenita + 1)*sizeof(char));

    if(tamCadenita!=NULL){
        printf("\nMemoria suficiente");
    }else{
        printf("\nNo hay memoria suficiente");
        exit;
    }

    strcpy(cadenita, cadena);
    printf("\nCadenita = %s", cadenita);
    free(cadenita);

    return 0;
}
*/

/*
int main(){

    char *cadenita;
    char cadena[10];
    int tamCadenita;

    printf("\nIntroduce una cadena de caracteres: ");
    gets(cadena);

    //tamCadenita = strlen(cadena);
    cadenita = (char*)calloc(strlen(cadena), sizeof(char));

    if(strlen(cadena)!=NULL){
        printf("\nMemoria suficiente");
    }else{
        printf("\nNo hay memoria suficiente");
        exit;
    }

    strcpy(cadenita, cadena);
    printf("\nCadenita = %s", cadenita);
    free(cadenita);

    return 0;
}
*/

/*
int main(){

    char *cadenita;
    char cadena[10];
    int tamCadenita;

    printf("\nIntroduce una cadena de caracteres: ");
    gets(cadena);

    tamCadenita = strlen(cadena);
    cadenita = (char*)malloc((tamCadenita + 1)*sizeof(char));

    if(tamCadenita!=NULL){
        printf("\nMemoria suficiente");
    }else{
        printf("\nNo hay memoria suficiente");
        exit;
    }

    strcpy(cadenita, cadena);
    printf("\nCadenita = %s", cadenita);
    free(cadenita);

    return 0;
}*/

//Librer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#include <time.h>

//Cabeceras


//main
int main(){
    char cadena[125];
    char cadena2[125];
    char *cadenita, *cadenita2;
    int tamcadenita;
    int tamcadenita2;
  
    puts("\n Introduce una cadena de caracteres\n");
    //printf("\n caracteres: %d\n",X);
    gets(cadena);

    //tamcadenita=strlen(cadena);//en tamcadenita estará almacenado el valor dinamico del tamaño de la cadena    
    tamcadenita=((strlen(cadena)))*sizeof(char);
    printf("\ntamaño cadena1 es: %d",tamcadenita);

    //cadenita = (char*)realloc(cadenita,(tamcadenita+1)*sizeof(char));
    cadenita = (char*) malloc(tamcadenita);

    if(cadenita!=NULL){
        printf("\nMemoria sufiente\n"); //las cadenas \0
    }
    else{
        printf("\n No hay memoria sufiente\n");
        exit(-1);
    }
    strcpy(cadenita,cadena);
    printf("cadenita = %s\n",cadenita);
   // free(cadenita);
    
    puts("\nIntroduce la cadena 2 de caracteres\n");
    gets(cadena2);

    tamcadenita2=(((strlen(cadena2)))*(sizeof(char)));//tamaño de la cadena 2 en bytes
    printf("\ntamaño cadena2 es: %d",tamcadenita2);

    cadenita = (char*)realloc(cadenita,(tamcadenita+tamcadenita2));
    printf("\ntamaño cadena completa es: %d",(tamcadenita+tamcadenita2));

    if(cadenita!=NULL){
        printf("\nMemoria suficiente2\n");
    }
    else{
        printf("\n No hay memoria suficiente2\n");
        exit(-1);
    }
    //strcpy(cadenita,cadena2);
    //strcat(cadenita,cadena);
    strcat(cadenita,cadena2);
    printf("cadenita = %s\n",cadenita);

    tamcadenita=((strlen(cadenita)))*sizeof(char);
    printf("cadenita_final = %i\n",tamcadenita);

    free(cadenita);
    //free(cadenita2);
    cadenita=NULL;
   // cadenita2=NULL;
    
    if(cadenita == NULL){
        printf("\nLa memoria se libero correctamente\n");
    }
    else {
        printf("\nLa memoria no se ha liberado");
    }
    //system("pause");
    return(0);
}