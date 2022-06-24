/*listaDC.h*/
/*Prototipos y/o funciones*/
/*Estructuras principales*/

typedef struct Alumno {
    int id;
    char name [20];
    int edad;
}Alumno;

typedef struct Nodo{
    Alumno *datos;
    struct Nodo *sig;
    struct Nodo *ant;
}Nodo;

typedef struct ListaDC{
    Nodo *cabeza;
    Nodo *cola;
}ListaDC;

Alumno* crear_Alumno(int ID,char NAME[20],int EDAD);
Nodo *crear_Nodo(Alumno *alumno);
ListaDC *crear_ListaDC();

int isEmpty(ListaDC lista);
void insertar_cabeza(ListaDC *lista, Nodo *aux);
void insertar_cola(ListaDC *lista, Nodo *aux);
Nodo* buscaElemento(ListaDC *lista, Nodo *elemento);
void insertar_enmedioA(ListaDC *lista, Nodo *anterior,Nodo *elemento);
void insertar_enmedioD(ListaDC *lista, Nodo *despues, Nodo *elemento);

void quitar_cabeza(ListaDC *lista);
void quitar_cola(ListaDC *lista);
void quitar_enmedio(ListaDC *lista, Nodo *elemento);

void vaciarLista(ListaDC *lista);
void vaciarListaR(ListaDC *lista);

void printLista(ListaDC *lista);