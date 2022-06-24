/*Pila de libros*/

/*Librerias*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Estructuras
typedef struct{
    int index;
    char book_name[50];
}Book;

typedef struct{
    Book book;
    int counter;
    struct Node *next;
}Node;

//Declraración de las funciones
Node* push(Node *node,char book_name[]);
Node* pop(Node *topStack);
Node* emptyStack(Node *stack);
void printStack(Node *stack);

static int m=0, n=100; //Variables estaticas para el numeros aleatorios

Node* push(Node *node,char book_name[]){

    Node *newNode; //Estrucura de tipo nodo como auxiliar
    newNode = (Node*)malloc(sizeof(Node)); //Reservar memoria dinamicamnete
    //newNode->book->index=rand()%(n-m+1)+m;
    newNode->book.index=rand()%(n-m+1)+m; //Se guarda el nodo accediendo a la estructura y random
    //strcpy(newNode->book->book_name,book_name);
    strcpy(newNode->book.book_name,book_name); //Se copia el nombre del libro

    if(node==NULL){ //Condición para saber si se encuntra vacia la pila
        newNode -> counter=1; //El nodo se coloca en el inicio
    }
    else{ //De lo contrario de la condicioón
        newNode -> counter++; 
    }

    //Hace la conexión entre los nodos
    newNode -> next = node; 
    node = newNode;

    return newNode; //Regresa el nuevo nodo
    free(newNode); //Se libera la memoria dinamica
}

Node* pop(Node *topStack){

    if(topStack==NULL){ //Condiicón para saber si la pila se encuntra vacia
        printf("NO HAY ELEMENTOS QUE ELIMAR, PILA VACIA");
        return NULL; //Regresa un NULL
    }

    Node *topAux; //Nodo auxiliar para la memoria dinamica
    topAux = topStack; //El auxiliar se iguala al tope 
    topStack = topAux -> next; //Se actualiza la cima 
    //topStack -> counter = counter--;  No se necesita porque se decrementa en automático
    free(topAux); //Se libera al auxiliar

    return topStack; //Regresa la pila
}

Node* emptyStack(Node *stack){ //Función para VACIAR la pila

    if(stack == NULL){ //Condición para saber si la pila se encuentra vacia
        printf("LA PILA ESTA VACIA");
    }
    else{ //De lo contrario a la condición
        Node *stackAux; //Nodo auxiliar
        stackAux = stack; //Se iguala al tope
        while(stackAux != NULL){ //Condición para saber si se encuentra vacia?
            //pop(*stack)

            //Hace lo MISMO que el pop
            stack = stackAux->next;
            free(stackAux); 
            stackAux = stack; 
        }
    }

    return stack; //Se regresa 
}

void printStack(Node *stack){

   if(stack == NULL){ //Condición para saber si se encunetra vacia
        printf("LA PILA ESTA VACIA");
    }
    else{ //De lo contrario de la condición
        Node *stackAux; //Nodo auxiliar
        stackAux = stack; //El nodo estará apunatndo al tope
        while(stackAux != NULL){ //Condición para saber si se encuentra vacia
            //Se imprime el contenido de la pila
            printf("|%d   %s|\n\n",stackAux -> book.index,stackAux -> book.book_name );                    
            //printf("|%d   %s|\n\n",stackAux -> book->index,stackAux -> book->book_name );                    
           stackAux= stackAux->next; //Se actualiza el auxiliar
        }
    }
}

int main (){

    srand(time(NULL)); //Función para el numero random
    Node *stackBooks; //Apuntador de tipo nodo para crear la pila
    stackBooks = NULL; //Apunta a NULL
    int option=1; //Variable inicializada

    while(option !=5){ //Ciclo para repetir las acciones

        //Impresión de las distintas opciones
        printf("\nBienvenido yo soy Yatsiri\n");
        printf("\n1- Agregar libro\n");
        printf("\n2- Quitar libro\n");
        printf("\n3- Vaciar pila\n");
        printf("\n4- Imprimir la pila\n");
        printf("\n5- Salir o Terminar\n");
        printf("\n Selecciona una Opcion:\n");
        scanf("%d",&option); //Se guarda la opción ingresada

        system("clear"); //Se limpia el buffer de entrada

        switch(option){ //Switch con las distintas opciones

            case 1:{
                char book_name[50]={"-1"}; //Se guarda un -1 para la condición  
                printf("Agregar libros, presione 0 para salir\n");
                while(strcmp(book_name,"0")!=0){ //Ciclo comparando cadenas
                    printf("\nAgrega nombre del nuevo libro: ");
                    //scanf("%s",book_name); 
                    scanf("%*c%[^\n]",book_name); //Se guarda el nombre
                    if(strcmp(book_name,"0") != 0){ //Comparativa para saber si se ingresa algo
                        stackBooks=push(stackBooks,book_name); //Se manda el push con argumentos
                    }
                }
                break; //Se finaliza el caso 1
            }

            case 2:{
                stackBooks=pop(stackBooks); //Se llama la función pop con la pila
                break; //Finaliza el caso 2
            }

            case 3:{
                stackBooks=emptyStack(stackBooks); //Se llama la función con la pila
                break; //Finaliza el caso 3
            }
            case 4:{
                printf("\n\n");
                printStack(stackBooks); //Se llama la funcion y se envía la pila
                break; //Finaliza el caso 4
            }

            default: { //Caso de default
                break; //Finaliza la opción 
            }
        }
    }

    
}