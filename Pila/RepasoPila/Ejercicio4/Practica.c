/**
 * @file main.c
 * @authors Brian Rivera Martinez 2193036861, VÃ­ctor SaÃºl GarcÃ­a Godoy 2183042802
 * basado en los ejemplos de la profesora Areli Rojo
 * @brief
 * @version 0.1
 * @date 2021-11-25
 *
 * @copyright Copyright (c) 2021
 *
 */

//Incluyento bibliotecas
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>


//estructuras
/**
 * @brief structure type Simbol
 *
 */
typedef struct
{
    char value;
} Simbol;



/**
 * @brief structure type Node
 * @
 */
typedef struct
{
    int count;
    Simbol *simbol;
    struct Node *next;
} Node;



/**
 * @brief structure type Pila
 *
 */
typedef struct
{
    Node *cima;
    int longitud;
} Pila;


//DeclaraciÃ³n de funciones

/**
 * @brief Elimina el ultimo nodo de la pila
 *
 * @param Pila *pila
 * @return Node*
 */
Node *pop(Pila *pila);



/**
 * @brief Crea un sÃ­mbolo, el cual almacenarÃ¡ un char
 *
 * @param char val
 * @return Simbol*
 */
Simbol *createSimbol(char val);



/**
 * @brief Crea un nodo, el cual almacenarÃ¡ un simbol
 *
 * @param pointer
 * @return Node*
 */
Node *createNode(Simbol *pointer);



/**
 * @brief Verifica si la pila estÃ¡ vacÃ­a
 *
 * @param pila
 * @return int
 */
int isEmpty(Pila pila);



/**
 * @brief Inserta un nodo a la pila
 *
 * @param pila
 * @param nodo
 */
void push(Pila *pila, Node *nodo);



/**
 * @brief Imprime el contenido de la pila
 *
 * @param pila
 */
void printStack(Pila *pila);



/**
 * @brief Crea una nueva pila
 *
 * @return Pila*
 */
Pila *newStack();



/**
 * @brief Libera la pila
 *
 * @param pila
 */
void vaciar_Pila(Pila *pila);



/**
 * @brief indica la jerarquÃ­a de los operadores de una expresiÃ³n.
 *    
 * @param x
 * @return int
 */
int priority(char x);


/**
 * @brief Devuelve el caracter del Ãºltimo nodo almacenado en pila.
 * 
 * @param pila 
 * @return char 
 */
char travel(Pila *pila);





//Funciones
Node *pop(Pila *pila)
{
    Node *aux = NULL;
    if (!isEmpty(*pila)) {
        aux = pila->cima;
        pila->cima = pila->cima->next;
        pila->longitud--;
    }

    return (aux);
}



Simbol *createSimbol(char val) {
    Simbol *aux = (Simbol *)malloc(sizeof(Simbol));
    aux->value = val;
    return (aux);
}



Node *createNode(Simbol *pointer) {
    Node *nodo = (Node *)malloc(sizeof(Node));
    nodo->count = 0;
    nodo->simbol = pointer;
    nodo->next = NULL;
    return (nodo);
}



int isEmpty(Pila pila) {
    if (pila.longitud == 0){

        return (1);
    } else {

        return (0);
    }
}



void push(Pila *pila, Node *nodo) {
    if (isEmpty(*pila) == 1) {

        pila->cima = nodo;
    }else{

        nodo->next = pila->cima;
        pila->cima = nodo;
    }
    pila->longitud++;
}



void printStack(Pila *pila) {
    Node *aux = pila->cima;
    Simbol *simb;
    if (!isEmpty(*pila)) {

        while (aux != NULL){

            simb = aux->simbol;
            printf("%c ", simb->value);
            aux = aux->next;
            printf("\n");
        }
    }
}



Pila *newStack() {
    Pila *pila = (Pila *)malloc(sizeof(Pila));
    pila->cima = NULL;
    pila->longitud = 0;
    return (pila);
}



void vaciar_Pila(Pila *pila) {

    Node *aux;
    aux = pop(pila);
    while( aux != NULL ){

        free(aux);
        aux = pop(pila);
    }
    free(pila);
}



int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^' || x == '$')
        return 3;
    return 0;
}


/*Ã‰sta funciÃ³n "travel, o viaje en esp." es similar a pop, sin embargo Ã©sta devuelve
el caracter almacenado en la pila*/
char travel(Pila *pila){
    if ( pila->cima == NULL ) {

        return -1;
    }else{

        char aux = pila->cima->simbol->value;
        pila->cima = pila->cima->next;
        pila->longitud--;
        return aux;
    }
}



//FunciÃ³n principal main
int main() {

    Pila *pila = newStack();

   
    FILE *archivo = fopen("infijo.txt", "r"); //Archivo de lectura
    FILE *archivo1 = fopen("Postfijo.txt", "w+"); //Archivo de escritura
    char bufer[500]; //Cadena de carÃ¡cteres que almacenarÃ¡ las lineas del archivo de lectura

    while (fgets(bufer, 500, archivo)){ 
        strtok(bufer, "\n");//Almacena la linea de texto actual en bufer

        char exp[500];
        char *e = bufer; //e apunta al primer caracter de bufer.
        char x;


        while (*e != '\0') { //e irÃ¡ recorriendo toda la linea hasta encontrarse con un nulo.

            if (isalnum(*e)){ //isalnum permite saber si *e es un caracter alfanumÃ©rico.

                fprintf(archivo1, "%c",*e);//imprime el caracter en el archivo de escritura

            }else if (*e == '('){

                Simbol *simb = createSimbol(*e); //crea un simbolo con el caracter
                Node *nodo = createNode(simb); //crea un nodo con el simbolo
                push(pila, nodo);//inserta el nuevo nodo en la pila

            }else if (*e == ')'){

                while ((x = travel(pila)) != '('){
                
                    fprintf(archivo1, "%c", x);
                }
            }else{

                while ((pila->cima != NULL) && (priority(pila->cima->simbol->value) >= priority(*e))){

                    fprintf(archivo1, "%c", travel(pila));//imprime el caracter almacenado en la cima de la pila
                }
                    
                Simbol *simb = createSimbol(*e);
                Node *nodo = createNode(simb);
                push(pila, nodo);
            }
            e++;//incrementa el apuntador de e, apuntando al siguiente caracter de la linea de bufer
        }

        //este while nos permitirÃ¡ imprimir lo Ãºltimo que estÃ¡ almacenado en la pila pues
        // e ya a encontrado un valor nulo en la cadena de buffer.
        while (pila->cima != NULL){
            fprintf(archivo1, "%c", travel(pila));
        }

        fprintf(archivo1, "\n");

    }

    fclose(archivo); //cierra el archivo de lectura
    fclose(archivo1); //cierra el archivo de escritura
    vaciar_Pila(pila); //vacÃ­a la pila


    //Ã‰ste es el ejercicio 2

    Pila *stack = newStack();
    Simbol *simbolito = createSimbol('*');
    Node *nodito = createNode(simbolito);
    push(stack, nodito);
    simbolito = createSimbol('+');
    nodito = createNode(simbolito);
    push(stack,nodito);
    simbolito = createSimbol('-');
    nodito = createNode(simbolito);
    push(stack, nodito);
    simbolito = createSimbol('/');
    nodito = createNode(simbolito);
    push(stack, nodito);
    pop(stack);
    simbolito = createSimbol('*');
    nodito = createNode(simbolito);
    push(stack, nodito);
    simbolito = createSimbol('$');
    nodito = createNode(simbolito);
    push(stack, nodito);
    pop(stack);
    simbolito = createSimbol('%');
    nodito = createNode(simbolito);
    push(stack, nodito);
    printf("\n\n\n");
    printStack(stack);
    vaciar_Pila(stack);

    return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>

typedef struct{
   char value;
}Simbol;

typedef struct _Node{
   int count;
   Simbol *simbol;
   struct _Node *next;
}Node;

typedef struct
{
    Node *cima;
    int longitud;
} Pila;


Simbol *createSimbol(char val){
    Simbol *aux = (Simbol*)malloc(sizeof(Simbol));
    aux->value = val;
    return (aux);
}

Node *createNode( Simbol *pointer ){
    Node *nodo = (Node*)malloc(sizeof(Node));
    nodo->count = 0;
    nodo->simbol = pointer;
    nodo->next = NULL;
    return(nodo);
}


int isEmpty( Pila pila ){
    if ( pila.longitud == 0 ) {
        printf("\n pila vacia : <isEmpty--Function>");
        return(1);
    }else{
        printf("\npila no vacia : <isEmpty--Function>");
        return(0);
    }
}

void push( Pila *pila, Node *nodo){
    if ( isEmpty( *pila ) == 1 ) {
        pila->cima = nodo;
    }else{
        nodo->next = pila->cima;
        pila->cima = nodo;
    }
    pila->longitud++;
}

Simbol* pop( Pila *pila ){
    Simbol *simbol = NULL;//el elemento simbol del nodo a eliminar (sera lo que regresaremos)
    Node *extra;//puntero a el nodo a eliminar
    
    //no esta vacia la lista?
    if ( !isEmpty( *pila )) {
        //no esta vacia
        extra = pila->cima;//obtenemos el primer nodo
        pila->cima = pila->cima->next;//hacemos que el puntero de la pila se vaya al siguiente nodo
        pila->longitud--;//la longitud de la pila disminuye
        simbol = extra->simbol;//obtenemos el miembro simbol y lo guardamos en simbol
        free(extra);
        printf("\n se ha eliminado el nodo: %c", simbol->value);
    } else {
        //esta vacia
        printf("\n pila vacia : <pop--Function>");
    }
    //regresamos el puntero al simbol
    return(simbol);
}

void printStack( Pila *pila ){
    Node *aux = pila->cima;
    Simbol *simb;
    if ( !isEmpty( *pila ) ) {
        while( aux != NULL ){
            simb = aux->simbol;
            printf("\n el caracter es: %c", simb->value);
            aux = aux->next;
            //aux->next;
            //printf("\n siguiente : %p", aux->next);
        }
    }
}

Pila *newStack(){
    Pila *pila = (Pila*)malloc(sizeof(Pila));
    pila->cima = NULL;
    pila->longitud = 0;
    return (pila);
}


////////////////////////////////////////////////////////////////
void vaciar_Pila( Pila *pila){
    while(pop(pila));
}

int main (){

    char c;
    printf("Ingrese un caracter: ");
    scanf("%c", &c);
    Pila *pila = newStack();
    Simbol *simbolo = createSimbol(c);
    Node *nodo = createNode(simbolo);
    push(pila, nodo);
    Simbol *simbolo1 = createSimbol('J');
    Node *nodo1 = createNode(simbolo1);
    push(pila, nodo1);
    Simbol *simbolo2 = createSimbol('X');
    Node *nodo2 = createNode(simbolo2);
    push(pila, nodo2);

    printStack(pila);
    vaciar_Pila(pila);
    return 0;
}
*/