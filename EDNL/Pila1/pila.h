/* pila.h contiene las cabeceras */

#define TAMPILA 5

typedef int TipoDato;

typedef struct{
    TipoDato listaPila[TAMPILA];
    int cima;
}Pila;

void newPila(Pila *pila);
void push(Pila *pila, TipoDato elemento);
TipoDato pop(Pila *pila);
int isEmpty(Pila pila);
int isFull(Pila pila);
TipoDato cima(Pila pila);
int count(Pila pila);
void clear(Pila *pila);
int lenMax();
void printStack(Pila pila);

// tarea completar el main =)