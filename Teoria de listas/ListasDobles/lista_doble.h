/*lista_doble.h*/
/*Prototipos y/o funciones*/
/*Estructuras principales*/

typedef struct {
    int id;
    char name [20];
    int edad;
}Alumno;

typedef struct Nodo{
    Alumno *datos;
    struct Nodo *sig;  //con o sin struct
    struct Nodo *ant;
}Nodo;

typedef struct ListaD{
    Nodo *cabeza;
    //Nodo *cola;
}ListaD;


Alumno* crear_Alumno(int ID,char NAME[20],int EDAD);
Nodo *crear_Nodo(Alumno *alumno);
ListaD *crear_ListaD();
int isEmpty(ListaD lista);
void insertar_cabeza(ListaD *lista, Nodo *aux);
void insertar_cola(ListaD *lista, Nodo *aux);
void insertar_enmedioD(ListaD *lista, Nodo *despues,Nodo *elemento);
void insertar_enmedioA(ListaD *lista, Nodo *antes,Nodo *elemento);
void quitar_cabeza(ListaD *lista);
void quitar_cola(ListaD *lista);
void quitar_enmedio(ListaD *lista, Nodo *elemento);
void vaciarLista(ListaD *lista);
Nodo* buscaElemento(ListaD *lista, Nodo *elemento);
void printLista(ListaD *lista);