/*pilaD2.h*/
/*Prototipos y/o funciones*/
/*Estructuras principales*/

typedef struct Alumno{
    int id;
    char name [20];
    int edad;
}Alumno;

typedef struct Nodo{
    Alumno *datos;
    struct Nodo *sig;
}Nodo;

typedef struct Pila{
    Nodo *cima;
    int longitud;
}Pila;

Alumno* crear_Alumno(int ID,char NAME[20],int EDAD);
Nodo *crear_Nodo(Alumno *alumno);
Pila *crear_Pila();
//int isEmpty(Pila *pila);
int isEmpty(Pila pila);
void push(Pila *pila, Nodo *aux);
//Nodo* pop(Pila *pila);
void pop(Pila *pila);
//void pop(Pila *pila);
void printPila(Pila *pila);
void vaciar(Pila *pila);


