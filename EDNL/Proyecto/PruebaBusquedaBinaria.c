//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Estructuras
typedef struct Alimento{
    char tipoAlimento[20];
    char nombreAlimento[25];
    int precioAlimento;
    char fechaCompraAlimento[10];
    char fechaCaducidadAlimento[10];
    int estatus;
}Alimento;

typedef struct Nodo{
    Alimento *datos;
    struct Nodo *sig;
}Nodo;

typedef struct ListaS{
    Nodo *cabeza;
    //Nodo *cola;
}ListaS;

//Funciones
ListaS *crear_ListaS(){
    ListaS *aux = ( ListaS* )malloc( sizeof( ListaS ) );

    aux->cabeza = NULL;

    return( aux );
}

Nodo *crear_Nodo( Alimento *alimento ){
    Nodo *aux = ( Nodo* )malloc( sizeof( Nodo ) );

    aux->datos = alimento;
    aux->sig = NULL;

    return( aux );
}

Alimento* crear_Alimento(char tipoAlimento[20], char nombreAlimento[25], int precioAlimento, char fechaCompraAlimento[10], char fechaCaducidadAlimento[10]){
    Alimento *aux = (Alimento*)malloc(sizeof(Alimento));

    strcpy(aux->nombreAlimento, nombreAlimento);
    strcpy(aux->tipoAlimento, tipoAlimento);
    aux->precioAlimento = precioAlimento;
    strcpy(aux->fechaCompraAlimento, fechaCompraAlimento);
    strcpy(aux->fechaCaducidadAlimento, fechaCaducidadAlimento);

    return( aux );
}


int isEmpty( ListaS lista ){
    if( lista.cabeza == NULL ){
        return( 1 );
    }
    else{
        return (0);
    }
}

void insertar_cabeza(ListaS *lista, Nodo *aux ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = aux;
    }
    else{
        aux->sig = lista->cabeza;
        lista->cabeza = aux;
    }
}

void insertar_enmedio( ListaS *lista, Nodo *anterior,Nodo *elemento ){
    if( isEmpty( *lista ) == 1 ){
        lista->cabeza = elemento;
    }
    else{
        elemento->sig = anterior->sig;
        anterior->sig = elemento;
    }
}

void insertar_cola( ListaS *lista, Nodo *aux ){
    Nodo *cola;
    cola = lista->cabeza;


    if( isEmpty( *lista ) == 1 ){
        insertar_cabeza( lista,aux );
    }
    else{
        while( cola->sig != NULL ){
        cola = cola->sig;
        }
        cola->sig = aux;
        cola = aux;
    }
}

void printLista(ListaS *lista){
    Nodo *aux = lista->cabeza;
    Alimento *alimento;

    if(isEmpty(*lista) !=1 ) {
        while(aux != NULL){
            alimento = aux->datos;
            printf("\n\n DATOS DEL ALIMENTO.");
            printf("\n Tipo: %s", alimento->tipoAlimento);
            printf("\n Nombre: %s", alimento->nombreAlimento);
            printf("\n Precio: %i", alimento->precioAlimento);
            printf("\n Fecha de compra: %s", alimento->fechaCompraAlimento);
            printf("\n Fecha de caducidad: %s", alimento->fechaCaducidadAlimento);
            //printf("\n Estatus : %s,\n", alimento->estatus);
            aux=aux->sig;
        }
    }
    else{
        printf("\n LISTA SIN NADA \n");
    }
}

Nodo *quitar_cabeza( ListaS *lista ){
    Nodo *aux = NULL;

    if( !isEmpty( *lista ) ){
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        aux->sig = NULL;
        return aux;
        }

}

void vaciarLista( ListaS *lista ){
    Nodo *aux = lista->cabeza;

    if( isEmpty( *lista ) != 1 ){
        while( aux != NULL ){
            aux = aux->sig;
            quitar_cabeza( lista );
        }
    }
    else{
        //printf("\nLISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    free( aux );
}


struct Nodo *ultimoNodo(struct Nodo *cabeza){
	struct Nodo *temporal = cabeza;
	while (temporal != NULL && temporal->sig != NULL){
		temporal = temporal->sig;
	}
	return temporal;
}


struct Nodo *particion(struct Nodo *cabeza, struct Nodo *cola){
    struct Nodo *pivote = cabeza;
	struct Nodo *frente = cabeza;
	//int temporal = 0;
    Alimento *temporal;

    while (frente != NULL && frente != cola){
		if (frente->datos->precioAlimento <= cola->datos->precioAlimento){
			pivote = cabeza;
			temporal = cabeza->datos; ///////
			//cabeza->datos = frente->datos; ////////////
			frente->datos = temporal;
			cabeza = cabeza->sig;
		}
		frente = frente->sig;
	}
    temporal = cabeza->datos;
    cabeza->datos = cola->datos;
    cola->datos = temporal;
    return pivote;

}

void quick_sort(struct Nodo *cabeza, struct Nodo *cola){
    if (cabeza == cola){
		return;
	}
	struct Nodo *pivote = particion(cabeza, cola);
	if (pivote != NULL && pivote->sig != NULL){
		quick_sort(pivote->sig, cola);
	}
	if (pivote != NULL && cabeza != pivote){
		quick_sort(cabeza, pivote);
	}
}

/*Busqueda binaria iterativa*/
/*devuelve el indice del elemento buscado en caso de ser encontrado o un -1 en caso de no estar*/
/*int busqueda_binaria(int a[], int n, int elemento){ //a= [2,4,6,8,10,12,14,16,18,19,20,22,24]
    int central, bajo, alto, valorCentral;
    bajo = 0;
    alto = n-1; //alto = 12

    printf("\nEl elemento a buscar en la lista es el %d", elemento);
    while(bajo <= alto){ //0 <= 12    ////0 <= 5
        central = (bajo + alto)/2; //central = 0+12/2= 6  ////central= 0+5/2= 2.5->2
        valorCentral = a[central]; //vC= 14 ////vC=6
        
        if(elemento == valorCentral){ //14==14 // 8==14 /// 8 ==6
            printf("\nEl elemento %d se encuentra en la posición %d", elemento, central);
            printf("\nYa encontré el elemento que buscabas por busqueda binaria iterativa, regresaré al menú principal...");
        }
        else if(elemento < valorCentral){ //8 < 14 ////8<6
            alto = central - 1; //alto = 6-1 = 5
        }
        else{ ////
            bajo = central + 1; //bajo = 2+1=3
        }
    }
    printf("\nError el elemento %d no se encuentra en ninguna posición de la lista, regresaré al menú princupal...",elemento);
    return (-1);
}*/

void ordenamiento_insercion( ListaS *lista ){
    
    Nodo *iterador = lista->cabeza;
    Nodo *orden = NULL;

    while ( iterador != NULL ) {
        Nodo *respaldo = iterador->sig;

        if ( orden == NULL || orden->datos->precioAlimento > iterador->datos->precioAlimento ) { //*CONDICION* >=
            iterador->sig = orden;
            orden = iterador;
        }
        else{
            Nodo *aux = orden;

            while ( aux->sig != NULL && aux->sig->datos->precioAlimento < iterador->datos->precioAlimento) {
                aux = aux->sig;
            }

            iterador->sig = aux->sig;
            aux->sig = iterador;
        }
        iterador = respaldo;
    }
    lista->cabeza = orden;
}

int cantidad_nodos( ListaS* lista ){
    int cantidad = 0;
    if( lista->cabeza == NULL ) return 0;
    Nodo* iterador = lista->cabeza; 

    while( iterador != NULL ){
        cantidad++;
        iterador = iterador->sig;
    }
    return cantidad;
}

//Función para encontrar el medio de la lista mediante nodos 
Nodo* nodoMedio(Nodo* inicio, Nodo* ultimo){

    if(inicio == NULL){
        return NULL;
    }

    Nodo* aux = inicio;
    Nodo* help = inicio->sig;

    while(help != ultimo){

        help  = help->sig;
        if(help != ultimo){

            aux = aux->sig;
            help = help->sig;
        }
    }
    return aux;
}

//Algoritmo de la busqueda binaria para nodos de la lista
Nodo* busquedaBinaria(ListaS *lista, int valor){

    Nodo* inicio = lista->cabeza;
    Nodo* ultimo = NULL;
    char bandera = 'F';

    do{
        Nodo* medio = nodoMedio(inicio, ultimo); //Endontrar el nodo medio

        if(medio == NULL){ //Si el valor medio se encuentra vacio
            return NULL;
        }

        if(medio->datos->precioAlimento == valor){ //Si el valor a buscar se encuentra en el nodo medio
            bandera = 'V';
            printf("\n\n\nEl valor se encontrooooooooo");
            return medio;
        }

        else if(medio->datos->precioAlimento < valor){ //Si el valor se encuentra en la parte superior 
            inicio = medio->sig;
        }

        else{ //Si el valor se encuentra en la parte inferior
            ultimo = medio;
        }

    }while(ultimo == NULL || ultimo != inicio);

    return NULL; //Valor no encontrado en la lista

}


//cantidad de nodos -> longitud_Lista
int longitud_Lista( ListaS* lista ){
    int cantidad = 0;
    if( lista->cabeza == NULL ) return 0;
    Nodo* iterador = lista->cabeza; 

    while( iterador != NULL ){
        cantidad++;
        iterador = iterador->sig;
    }
    return cantidad;
}



//FunciÃ³n principal
int main(){

    ListaS *alimento = crear_ListaS();

    Nodo *Agua = crear_Nodo(crear_Alimento("Liquidos", "Agua", 2, "01/01/22", "05/01/22"));
    Nodo *Refresco = crear_Nodo(crear_Alimento("Liquidos", "Refresco", 6, "01/01/22", "05/01/22"));
    Nodo *AguaLimon = crear_Nodo(crear_Alimento("Liquidos", "AguaLimon", 4, "01/01/22", "05/01/22"));
    Nodo *Pepsi = crear_Nodo(crear_Alimento("Liquidos", "Pepsi", 1, "01/01/22", "05/01/22"));
    Nodo *Jugo = crear_Nodo(crear_Alimento("Liquidos", "Jugo", 30, "01/01/22", "05/01/22"));
    Nodo *AguaMelon = crear_Nodo(crear_Alimento("Liquidos", "AguaMelon", 15, "01/01/22", "05/01/22"));
    Nodo *Fanta = crear_Nodo(crear_Alimento("Liquidos", "Fanta", 5, "01/01/22", "05/01/22"));
    Nodo *Mirinda = crear_Nodo(crear_Alimento("Liquidos", "Mirinda", 5, "01/01/22", "05/01/22"));

    insertar_cola(alimento, Agua);
    insertar_cola( alimento, Refresco );
    insertar_cabeza( alimento, AguaLimon );
    insertar_cola(alimento, Jugo);
    insertar_cola(alimento, AguaMelon);
    insertar_cola(alimento, Pepsi);
    insertar_enmedio(alimento, Refresco, Fanta);
    insertar_cabeza(alimento, Mirinda);

    printf("LISTA EN DESORDEN...");
    printLista(alimento);

    printf("\n\nLISTA EN ORDEN...");
    // quick_sort(alimento->cabeza, ultimoNodo(alimento->cabeza));
    // printLista(alimento);
    ordenamiento_insercion(alimento);
    printLista(alimento);
    int a = 5;
    busquedaBinaria(alimento, a);
    vaciarLista(alimento);

    return 0;
}
