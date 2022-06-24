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


//prototype for insertionMethod
/*void ordenamiento_insercion( ListaS *lista ){
    
    Nodo *pivote;
    Nodo *aux;
    Nodo *pointer;

    switch( longitud_Lista(lista) ){
        case 0: {
            printf("\nNo hay elementos por ordenar");
            break;
        }
        case 1:{
            printf("\nSolo hay un elemento por ordenar");
            break;
        }
        case 2: {
            aux = lista->cabeza;
            pivote = aux->sig;

            if ( pivote->datos->precioAlimento < aux->datos->precioAlimento ) {
                aux->sig = NULL;
                pivote->sig = aux;
                lista->cabeza = pivote;
                printf("\nLista de dos elementos ordenada");
                break;
            }
            printf( "\nLista ya ordenada" );
        }
        default: {

            pivote = lista->cabeza->sig;
            pointer = pivote;
            aux = lista->cabeza;
            while ( pivote->sig != NULL ) {
                if ( pointer == aux->sig && pointer->datos->precioAlimento < aux->datos->precioAlimento ) {
                    
                    if ( aux == lista->cabeza ) {

                        aux->sig = pointer->sig;
                        pointer->sig = lista->cabeza;
                        lista->cabeza = pivote;
                        pivote = aux->sig;
                        pointer = pivote;
                    
                    } else {

                        

                    }
                }
            }
        }

    }

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

    insertar_cola(alimento, Agua);
    insertar_cola( alimento, Refresco );
    insertar_cabeza( alimento, AguaLimon );
    insertar_cola(alimento, Jugo);
    insertar_cola(alimento, AguaMelon);
    insertar_cola(alimento, Pepsi);
    insertar_enmedio(alimento, Refresco, Fanta);

    printf("LISTA EN DESORDEN...");
    printLista(alimento);

    printf("\n\nLISTA EN ORDEN...");
    // quick_sort(alimento->cabeza, ultimoNodo(alimento->cabeza));
    // printLista(alimento);
    ordenamiento_insercion(alimento);//////////////////////////////////
    printLista(alimento);
    vaciarLista(alimento);

    return 0;
}