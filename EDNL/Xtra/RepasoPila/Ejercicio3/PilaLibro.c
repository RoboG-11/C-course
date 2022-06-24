/*Pila de libros*/

/*Librerias*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
    int index;
    char book_name[50];
}Book;

typedef struct{
    Book book;
    int counter;
    struct Node *next;
}Node;

Node* push(Node *node,char book_name[]);
Node* pop(Node *topStack);
Node* emptyStack(Node *stack);
void printStack(Node *stack);
void vaciar(Node *pila);

static int m=0, n=100;

Node* push(Node *node,char book_name[]){
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    //newNode->book->index=rand()%(n-m+1)+m;
     newNode->book.index=rand()%(n-m+1)+m;
    //strcpy(newNode->book->book_name,book_name);
    strcpy(newNode->book.book_name,book_name);

    if(node==NULL){
        newNode -> counter=1;
    }
    else{
        newNode -> counter++;
    }
    newNode -> next = node;
    node = newNode;
    return newNode;
}


Node* pop(Node *topStack){
    if(topStack==NULL){
        printf("NO HAY ELEMENTOS QUE ELIMAR, PILA VACIA");
        return NULL;
    }
    Node *topAux;
    topAux = topStack;
    topStack = topAux -> next;
    //topStack -> counter = counter--;  No se necesita porque se decrementa en automático
    free(topAux);
    return topStack;
}

Node* emptyStack(Node *stack){
     if(stack == NULL){
         printf("LA PILA ESTA VACIA");
     }
     else{
         Node *stackAux;
         stackAux = stack;
         while(stackAux != NULL){
             //pop(*stack)
             stack = stackAux->next;
             free(stackAux);
             stackAux = stack;   
         }
     }
     return stack;
}


void printStack(Node *stack){
   if(stack == NULL){
         printf("LA PILA ESTA VACIA");
     }

    else{
        Node *stackAux;
        stackAux = stack;
        while(stackAux != NULL){
            printf("|%d   %s|\n\n",stackAux -> book.index, stackAux -> book.book_name );                    
            //printf("|%d   %s|\n\n",stackAux -> book->index,stackAux -> book->book_name );                    
           stackAux= stackAux->next;

        }
    }
}

void vaciar(Node *nodo){
    //Nodo *aux;
    //aux=pop(pila);
    //aux=pila->cima;
    //pop(pila);
    //while(aux!=NULL){
    while(nodo->next != NULL){    
        //free(aux);
        pop(nodo);
        //aux=pop(pila);
    }
}


int main (){
    srand(time(NULL));
    Node *stackBooks;
    stackBooks = NULL;
    int option=1;

    while(option !=5){
        //printf("1- Aniadir libros a la pila\n2- Quitar libros de la pila\n3- Vaciar pila\n4- Imprimir pila\n5- Salir\n Opcion: ");

        printf("\nBienvenido yo soy Yatsiri\n");
        printf("\n1- Agregar libro\n");
        printf("\n2- Quitar libro\n");
        printf("\n3- Vaciar pila\n");
        printf("\n4- Imprimir la pila\n");
        printf("\n5- Salir o Terminar\n");
        printf("\n Selecciona una Opcion:\n");
        scanf("%d",&option);
        system("clear");

        switch(option){

            case 1:{
                char book_name[50]={"-1"};
                printf("Agregar libros, presione 0 para salir\n");
                while(strcmp(book_name,"0")!=0){
                    printf("\nAgrega nombre del nuevo libro: ");
                    //scanf("%s",book_name); 
                    scanf("%*c%[^\n]",book_name);
                    if(strcmp(book_name,"0") != 0){
                        stackBooks=push(stackBooks,book_name);
                    }
                }
                break;
            }

            case 2:{
                stackBooks=pop(stackBooks);
                break;
            }

            case 3:{
                stackBooks=emptyStack(stackBooks);
                break;
            }
            case 4:{
                printf("\n\n");
                printStack(stackBooks);
                break;
            }

            default: {
                break;
            }
        }
    }
    vaciar(stackBooks);
    free(stackBooks);
}