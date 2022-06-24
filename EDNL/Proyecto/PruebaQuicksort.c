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

/*
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
	int temporal = 0;

    while (frente != NULL){
		if (frente->datos <= cola->datos){
			pivote = cabeza;
			temporal = cabeza->datos->precioAlimento; ///////
			//cabeza->datos = frente->datos; ////////////
			frente->datos->precioAlimento = temporal;
			cabeza = cabeza->sig;
		}
		frente = frente->sig;
	}
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
}*/


Nodo *ultimoNodo(Nodo *cabeza){

	Nodo *temporal = cabeza;

	while (temporal != NULL && temporal->sig != NULL){
		temporal = temporal->sig;
	}

	return temporal;
}


Nodo *particion(Nodo *cabeza, Nodo *cola){

    Nodo *pivote = cabeza;
	Nodo *frente = cabeza;
	//int temporal = 0;
    Alimento *temporal;

    while (frente != NULL && frente != cola){

		if (frente->datos->precioAlimento <= cola->datos->precioAlimento){

			pivote = cabeza;
			temporal = cabeza->datos; 
			cabeza->datos = frente->datos;
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

void quick_sort(Nodo *cabeza, Nodo *cola){

    if (cabeza == cola){
		return;
	}

	Nodo *pivote = particion(cabeza, cola);

	if (pivote != NULL && pivote->sig != NULL){
		quick_sort(pivote->sig, cola);
	}

	if (pivote != NULL && cabeza != pivote){
		quick_sort(cabeza, pivote);
	}
}

//Función principal
int main(){

    ListaS *alimento = crear_ListaS();

    Nodo *Agua = crear_Nodo(crear_Alimento("Liquidos", "Agua", 50, "01/01/22", "05/01/22"));
    Nodo *Refresco = crear_Nodo(crear_Alimento("Liquidos", "Refresco", 40, "01/01/22", "05/01/22"));
    Nodo *AguaLimon = crear_Nodo(crear_Alimento("Liquidos", "AguaLimon", 60, "01/01/22", "05/01/22"));
    Nodo *AguaSandia = crear_Nodo(crear_Alimento("Liquidos", "AguaSandia", 100, "01/01/22", "05/01/22"));
    Nodo *Fanta = crear_Nodo(crear_Alimento("Liquidos", "Fanta", 10, "01/01/22", "05/01/22"));
    Nodo *Jarabe = crear_Nodo(crear_Alimento("Liquidos", "Jarabe", 80, "01/01/22", "05/01/22"));

    insertar_cola( alimento, Agua );
    insertar_cola( alimento, Refresco );
    insertar_cabeza( alimento, AguaSandia );
    insertar_cola( alimento, AguaLimon );
    insertar_enmedio(alimento, Refresco, Fanta);
    insertar_enmedio(alimento, Fanta, Jarabe);

    printf("LISTA EN DESORDEN...");
    printLista(alimento);

    printf("\n\nLISTA EN ORDEN...");
    quick_sort(alimento->cabeza, ultimoNodo(alimento->cabeza));/////////////////////////////
    printLista(alimento);

    vaciarLista(alimento);

    return 0;
}

