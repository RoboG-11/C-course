/*cola.h*/
/*Prototipos y/o funciones*/
/*Estructuras principales*/

typedef struct {
    int id;
    char name [20];
    int edad;
}Alumno;

typedef struct Nodo{
    Alumno *datos;
    struct Nodo *sig;
}Nodo;

typedef struct Cola{
    Nodo *cabeza;
    //Nodo *cola;
    //int longitud;
}Cola;

Alumno* crear_Alumno(int ID,char NAME[20],int EDAD);
Nodo *crear_Nodo(Alumno *alumno);
Cola *crear_Cola();


//void insertar_cabeza(Cola *Cola, Nodo *aux);

int isEmpty(Cola Cola);

void printCola(Cola *Cola);

void insertar_cola(Cola *Cola, Nodo *aux);

//Nodo* buscaElemento(Cola *Cola, Nodo *elemento);
Nodo* buscaElemento(Cola *Cola, int ID);

//void insertar_enmedio(Cola *Cola, Nodo *anterior, Nodo *elemento);

void quitar_cabeza(Cola *Cola);
//void quitar_cola(Cola *Cola);
//void quitar_enmedio(Cola *Cola, Nodo *elemento);
void vaciarCola(Cola *Cola);