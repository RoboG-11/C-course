/*lista_simple.h*/
/*Prototipos y/o funciones*/
/*Estructuras principales*/

typedef struct {
    int id;
    char name [20];
    int edad;
}Alumno;

typedef struct{
    Alumno *datos;
    struct Nodo *sig;
}Nodo;

typedef struct{
    Nodo *cabeza;
    //Nodo *cola;
}ListaS;

Alumno* crear_Alumno(int ID,char NAME[20],int EDAD);
Nodo *crear_Nodo(Alumno *alumno);
ListaS *crear_ListaS();
int isEmpty(ListaS lista);
void insertar_cabeza(ListaS *lista, Nodo *aux);
void insertar_cola(ListaS *lista, Nodo *aux);
void insertar_enmedio(ListaS *lista, Nodo *anterior,Nodo *elemento);
void quitar_cabeza(ListaS *lista);
void quitar_cola(ListaS *lista);
void quitar_enmedio(ListaS *lista, Nodo *elemento);
Nodo* buscaElemento(ListaS *lista, Nodo *elemento);
//Nodo* buscaElemento(ListaS *lista, int ID);
void vaciarLista(ListaS *lista);
void printLista(ListaS *lista);