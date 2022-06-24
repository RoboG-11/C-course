/**
 * @file main.c
 * @authors Brian Rivera Martinez 2193036861, Víctor Saúl García Godoy 2183042802
 * @brief 
 * @version 1.15.5
 * @date 2022-01-27
 * 
 * @copyright Copyright (c) 2022
 **/


//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//Estructuras
typedef struct Alimento {
    char tipoAlimento[20];
    char nombreAlimento[25];
    int precioAlimento;
    char fechaCompraAlimento[10];
    char fechaCaducidadAlimento[10];
    int estatus;
}Alimento;

typedef struct Nodo {
    Alimento *datos; 
    struct Nodo *sig;
}Nodo;

typedef struct ListaS {
    Nodo *cabeza;
    struct ListaS *sig;
}ListaS;


//Declaración de funciones
/**
 * @brief Crea una estructura de tipo alimento.
 * 
 * @param tipoAlimento 
 * @param nombreAlimento 
 * @param precioAlimento 
 * @param fechaCompraAlimento 
 * @param fechaCaducidadAlimento 
 * @param estatus 
 * @return Alimento* 
 */
Alimento* crear_Alimento( char tipoAlimento[20], char nombreAlimento[25], int precioAlimento, char fechaCompraAlimento[10], char fechaCaducidadAlimento[10], int estatus );

/**
 * @brief Crea un nodo.
 * 
 * @param alimento 
 * @return Nodo* 
 */
Nodo *crear_Nodo( Alimento *alimento );

/**
 * @brief Crea una lista simple.
 * 
 * @return ListaS* 
 */
ListaS *crear_ListaS();

/**
 * @brief Permite saber si la lista está vacía.
 * 
 * @param lista 
 * @return int 
 */
int isEmpty( ListaS lista );

/**
 * @brief Inserta un nodo en la cabeza.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cabeza( ListaS *lista, Nodo *aux );

/**
 * @brief Inserta un nodo en medio de la lista.
 * 
 * @param lista 
 * @param anterior 
 * @param elemento 
 */
void insertar_enmedio( ListaS *lista, Nodo *anterior,Nodo *elemento );

/**
 * @brief Inserta un nodo en la cola.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cola( ListaS *lista, Nodo *aux );

/**
 * @brief Elimina la cabeza de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cabeza( ListaS *lista );

/**
 * @brief Elimina le último elemento de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cola( ListaS *lista );

/**
 * @brief Retira un nodo de enmedio.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *quitar_enmedio( ListaS *lista, Nodo *elemento );

/**
 * @brief Busca un elemento de forma secuencial.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *buscaElemento( ListaS *lista, Nodo *elemento );

/**
 * @brief Vacía la lista.
 * 
 * @param lista 
 */
void vaciarLista( ListaS *lista);

/**
 * @brief Imprime la lista en consola.
 * 
 * @param lista 
 */
void printLista( ListaS *lista );

/**
 * @brief Nos permite saber la cantidad de nodos que hay en una lista.
 * 
 * @param lista 
 * @return int 
 */
int cantidad_nodos( ListaS *lista );

/**
 * @brief Nos proporciona la dirección de memoria del último nodo.
 * 
 * @param cabeza 
 * @return Nodo* 
 */
Nodo *ultimoNodo( Nodo *cabeza );

/**
 * @brief Emula la partición de un arreglo en una lista simple para el algoritmo quicksort.
 * 
 * @param cabeza 
 * @param cola 
 * @return Nodo* 
 */
Nodo *particion( Nodo *cabeza, Nodo *cola );

/**
 * @brief Realiza el ordenamiento de una lista simple con el método de quicksort.
 * 
 * @param cabeza 
 * @param cola 
 */
void ordenamiento_quicksort( Nodo *cabeza, Nodo *cola );

/**
 * @brief Ordena una lista simple con el método de inserción.
 * 
 * @param lista 
 */
void ordenamiento_insercion( ListaS *lista );

/**
 * @brief Regresa el nodo que se encuentra exactamente en medio de la lista simple.
 * 
 * @param inicio 
 * @param ultimo 
 * @return Nodo* 
 */
Nodo *nodoMedio(Nodo* inicio, Nodo* ultimo);

/**
 * @brief Realiza la búsqueda de un elemento con la búsqueda binaria.
 * 
 * @param lista 
 * @param valor 
 * @return Nodo* 
 */
Nodo *busquedaBinaria( ListaS *lista, int valor );

/**
 * @brief Muestra en pantalla la lista.
 * 
 * @param lista 
 */
void listaConsola( ListaS *lista );

/**
 * @brief Muestra en pantalla el menú principal.
 * 
 */
void menuGeneral();

/**
 * @brief Muestra en pantalla el menú de bebidas.
 * @param ListaS *listaBebidas
 */
void menuBebidas(ListaS *listaBebidas);

/**
 * @brief Muestra en pantalla el menú de embutidos.
 * @param ListaS *listaEmbutidos
 */
void menuEmbutidos(ListaS *listaEmbutidos);

/**
 * @brief Muestra en pantalla el menú de frutas.
 * @param ListaS *listaFrutas
 */
void menuFrutas(ListaS *listaFrutas);

/**
 * @brief Muestra en pantalla el menú de Lacteos.
 * @param ListaS *listaLacteos
 */
void menuLacteos(ListaS *listaLacteos);

/**
 * @brief Muestra en pantalla el menú de Proteinas.
 * @param ListaS *listaProteinas
 */
void menuProteinas(ListaS *listaProteinas);

/**
 * @brief Muestra en pantalla el menú de embutidos.
 * @param ListaS *listaVerduras
 */
void menuVerduras(ListaS *listaVerduras);


//Funciones
/**
 * @brief Crea una estructura de tipo alimento.
 * 
 * @param tipoAlimento 
 * @param nombreAlimento 
 * @param precioAlimento 
 * @param fechaCompraAlimento 
 * @param fechaCaducidadAlimento 
 * @param estatus 
 * @return Alimento* 
 */
Alimento* crear_Alimento( char tipoAlimento[20], char nombreAlimento[25], int precioAlimento, char fechaCompraAlimento[10], char fechaCaducidadAlimento[10], int estatus ) {
    
    Alimento *aux = ( Alimento* )malloc( sizeof( Alimento ) );

    strcpy( aux->nombreAlimento, nombreAlimento);
    strcpy( aux->tipoAlimento, tipoAlimento );
    aux->precioAlimento = precioAlimento;
    strcpy( aux->fechaCompraAlimento, fechaCompraAlimento );
    strcpy( aux->fechaCaducidadAlimento, fechaCaducidadAlimento );
    aux->estatus = estatus;

    return( aux );
}

/**
 * @brief Crea un nodo.
 * 
 * @param alimento 
 * @return Nodo* 
 */
Nodo *crear_Nodo( Alimento *alimento ) {

    Nodo *aux = ( Nodo* )malloc( sizeof( Nodo ) );

    aux->datos = alimento;
    aux->sig = NULL;

    return( aux );
}

/**
 * @brief Crea una lista simple.
 * 
 * @return ListaS* 
 */
ListaS *crear_ListaS() {

    ListaS *aux = ( ListaS* )malloc( sizeof( ListaS ) );

    aux->cabeza = NULL;

    return( aux );
}

/**
 * @brief Permite saber si la lista está vacía.
 * 
 * @param lista 
 * @return int 
 */
int isEmpty( ListaS lista ) {

    if( lista.cabeza == NULL ) {
        return( 1 );
    }
    else{
        return ( 0 );
    }
}

/**
 * @brief Inserta un nodo en la cabeza.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cabeza( ListaS *lista, Nodo *aux ) {

    if( isEmpty( *lista ) == 1 ) {
        lista->cabeza = aux;
    }
    else{
        aux->sig = lista->cabeza;
        lista->cabeza = aux;
    }
}

/**
 * @brief Inserta un nodo en medio de la lista.
 * 
 * @param lista 
 * @param anterior 
 * @param elemento 
 */
void insertar_enmedio( ListaS *lista, Nodo *anterior, Nodo *elemento ) {

    if( isEmpty( *lista ) == 1 ) {
        lista->cabeza = elemento;
    }
    else{
        elemento->sig = anterior->sig;
        anterior->sig = elemento;
    }
}

/**
 * @brief Inserta un nodo en la cola.
 * 
 * @param lista 
 * @param aux 
 */
void insertar_cola( ListaS *lista, Nodo *aux ) {

    Nodo *cola;
    cola = lista->cabeza;

    if( isEmpty( *lista ) == 1 ) {
        insertar_cabeza( lista,aux );
    }
    else{
        while( cola->sig != NULL ) {
        cola = cola->sig;
        }

        cola->sig = aux;
        cola = aux;
    }
}

/**
 * @brief Elimina la cabeza de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cabeza( ListaS *lista ) {
    Nodo *aux = NULL;

    if( !isEmpty( *lista ) ) {
        aux = lista->cabeza;
        lista->cabeza = lista->cabeza->sig;
        aux->sig = NULL;

        return aux;
    }

}

/**
 * @brief Elimina le último elemento de la lista.
 * 
 * @param lista 
 * @return Nodo* 
 */
Nodo *quitar_cola( ListaS *lista ) {

    Nodo *cola;
    Nodo * anterior;
    
    if( isEmpty( *lista ) == 1 ) {

    }
    else{
        if( lista->cabeza->sig == NULL ) {
            
            cola = lista->cabeza;
            lista->cabeza = NULL;
            return cola;

        }
        else{
            cola = lista->cabeza;

            while( cola->sig != NULL ) {
                anterior = cola;
                cola = cola->sig;
            }

            anterior->sig = NULL;
            cola->sig = NULL;
            return cola;
        }
    }
}

/**
 * @brief Retira un nodo de enmedio.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *quitar_enmedio( ListaS *lista, Nodo *elemento ){

    Nodo *anterior;
    Nodo *borrar;

    if( isEmpty( *lista ) == 1 ) {

    }
    else{
        borrar = buscaElemento( lista, elemento );
        if( lista->cabeza == borrar ) {
            return quitar_cabeza( lista );
        }
        else{
            anterior = lista->cabeza;
            while( anterior->sig != borrar ) {
            anterior = anterior->sig;
            }

            anterior->sig = borrar->sig;
            borrar->sig = NULL;
            return borrar;
        }
    }
}

/**
 * @brief Busca un elemento de forma secuencial.
 * 
 * @param lista 
 * @param elemento 
 * @return Nodo* 
 */
Nodo *buscaElemento( ListaS *lista, Nodo *elemento ){

    Nodo* aux = lista->cabeza;
    Alimento *alu;
    if( !isEmpty( *lista ) ){

        while(aux->datos != elemento->datos){
            if( aux->sig != NULL ){
                aux=aux->sig;
            }
            else{
                aux=NULL;
                return( aux );
                break;
            }
            
        }

        if( aux->datos == elemento->datos ){
            return(aux);
        }

    }
    else{
        return( NULL );
    }
}

/**
 * @brief Vacía la lista.
 * 
 * @param lista 
 */
void vaciarLista( ListaS *lista ) {

    Nodo *aux = lista->cabeza;

    if( isEmpty( *lista ) != 1 ) {

        while( aux != NULL ) {
            aux = aux->sig;
            quitar_cabeza( lista );
        }
    }
    else{
        printf("\nLISTA SIN NADA PROCEDIMIENTO VACIAR LISTA \n");
    }
    free( aux );
}

/**
 * @brief Imprime la lista en consola.
 * 
 * @param lista 
 */
void printLista( ListaS *lista ) {

    Nodo *aux = lista->cabeza;
    Alimento *alimento;

    if( isEmpty(*lista) !=1 ) {

        while( aux != NULL ) {

            alimento = aux->datos;
            printf( "\n DATOS DEL ALIMENTO.\n" );
            printf( "\n Tipo: %s ", alimento->tipoAlimento );
            printf( "\n Nombre: %s ", alimento->nombreAlimento );
            printf( "\n Precio: %c%i pesos mexicanos", 36, alimento->precioAlimento );
            printf( "\n Fecha de compra: %s", alimento->fechaCompraAlimento );
            printf( "\n Fecha de caducidad: %s", alimento->fechaCaducidadAlimento );
            printf( "\n Estatus: %i\n", alimento->estatus );

            aux=aux->sig;
        }
    }
    else{
        printf( "\n LISTA SIN NADA \n" );
    }
}

/**
 * @brief Nos permite saber la cantidad de nodos que hay en una lista.
 * 
 * @param lista 
 * @return int 
 */
int cantidad_nodos( ListaS* lista ) {

    Nodo* iterador = lista->cabeza; 
    int cantidad = 0;

    if( lista->cabeza == NULL ) {
        return 0;
    } 

    while( iterador != NULL ) {
        cantidad++;
        iterador = iterador->sig;
    }

    return cantidad;
}

/**
 * @brief Nos proporciona la dirección de memoria del último nodo.
 * 
 * @param cabeza 
 * @return Nodo* 
 */
Nodo *ultimoNodo( Nodo *cabeza ) {

	Nodo *temporal = cabeza;

	while ( temporal != NULL && temporal->sig != NULL ) {
		temporal = temporal->sig;
	}

	return temporal;
}

/**
 * @brief Emula la partición de un arreglo en una lista simple para el algoritmo quicksort.
 * 
 * @param cabeza 
 * @param cola 
 * @return Nodo* 
 */
Nodo *particion( Nodo *cabeza, Nodo *cola ) {

    Nodo *pivote = cabeza;
	Nodo *frente = cabeza;
    Alimento *temporal;

    while ( frente != NULL && frente != cola ) {

		if ( frente->datos->precioAlimento <= cola->datos->precioAlimento ) {

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

/**
 * @brief Realiza el ordenamiento de una lista simple con el método de quicksort.
 * 
 * @param cabeza 
 * @param cola 
 */
void ordenamiento_quicksort( Nodo *cabeza, Nodo *cola ) {

    if ( cabeza == cola ) {
		return;
	}

	Nodo *pivote = particion( cabeza, cola );

	if ( pivote != NULL && pivote->sig != NULL ) {
		ordenamiento_quicksort( pivote->sig, cola );
	}

	if ( pivote != NULL && cabeza != pivote ) {
		ordenamiento_quicksort (cabeza, pivote );
	}
}

/**
 * @brief Ordena una lista simple con el método de inserción.
 * 
 * @param lista 
 */
void ordenamiento_insercion( ListaS *lista ) {
    
    Nodo *iterador = lista->cabeza; //inicia iterador en la cabeza de la lista
    Nodo *orden = NULL;

    while ( iterador != NULL ) {
        Nodo *respaldo = iterador->sig;

        if ( orden == NULL || orden->datos->precioAlimento > iterador->datos->precioAlimento ) {
            iterador->sig = orden;
            orden = iterador; //la lista orden almacena los nodos que ya fueron ordenados
        }
        else{
            Nodo *aux = orden; //aux itera sobre la lista orden

            while ( aux->sig != NULL && aux->sig->datos->precioAlimento < iterador->datos->precioAlimento) {
                aux = aux->sig; //se realiza la comparación de iterador con los elementos de la lista orden.
            }

            iterador->sig = aux->sig;
            aux->sig = iterador;
        }
        iterador = respaldo; //actualizamos el iterador con el respaldo de la lista original.
    }

    lista->cabeza = orden;//actualizamos la cabeza de la lista ordenada.
}

/**
 * @brief Regresa el nodo que se encuentra exactamente en medio de la lista simple.
 * 
 * @param inicio 
 * @param ultimo 
 * @return Nodo* 
 */
Nodo* nodoMedio( Nodo* inicio, Nodo* ultimo ) {

    if( inicio == NULL ) {
        return NULL;
    }

    Nodo* aux = inicio;
    Nodo* help = inicio->sig;

    while( help != ultimo ) {

        help  = help->sig;
        if( help != ultimo ) {

            aux = aux->sig;
            help = help->sig;
        }
    }

    return aux;
}

/**
 * @brief Realiza la búsqueda de un elemento con la búsqueda binaria.
 * 
 * @param lista 
 * @param valor 
 * @return Nodo* 
 */
Nodo* busquedaBinaria( ListaS *lista, int valor ) {

    Nodo* inicio = lista->cabeza;
    Nodo* ultimo = NULL;
    char bandera = 'F';

    do{
        Nodo* medio = nodoMedio( inicio, ultimo ); //Encontrar el nodo medio

        if( medio == NULL ){ //Si el valor medio se encuentra vacio
            printf( "\nEl alimento ingresado NO existe en el refrigerador" ); 
            return NULL;
        }

        if( medio->datos->precioAlimento == valor ){ //Si el valor a buscar se encuentra en el nodo medio
            bandera = 'V';

            if(medio->datos->estatus == 1){
                printf( "\nEl alimento %s se encuentra en el refrigerador", medio->datos->nombreAlimento );
                printf( ", y hay en existencia" );
            }else if (medio->datos->estatus == 0){
                printf( "\nEl alimento %s se encuentra en el refrigerador", medio->datos->nombreAlimento );
                printf( ", y NO hay en existencia" );
            }
            
            return medio;
        }

        else if( medio->datos->precioAlimento < valor ) { //Si el valor se encuentra en la parte superior 
            inicio = medio->sig;
        }

        else{ //Si el valor se encuentra en la parte inferior
            ultimo = medio;
        }

    }while( ultimo == NULL || ultimo != inicio );

    printf( "\nEl alimento ingresado NO existe en el refrigerador" );
    return NULL; //Valor no encontrado en la lista

}

/**
 * @brief Muestra en pantalla la lista.
 * 
 * @param lista 
 */
void listaConsola( ListaS *lista ) {

    int opcion;
    char bandera = 'F';

    printf( "\nIngresa los datos de alimento como se indica... " );

    Nodo *aux;
    char tipoAlimento[20];
    char nombreAlimento[25];
    int precioAlimento;
    char fechaCompraAlimento[10];
    char fechaCaducidadAlimento[10];
    int estatus;

    printf( "\n\nIngresa el tipo de alimento (Bebida, Embutido, Fruta, Lacteo, Proteina o Verdura)" );
    printf( "\nTipo del alimento: " );
    scanf(" %[^\n]", &tipoAlimento );

    printf( "\nIngresa el nombre del alimento" );
    printf( "\nNombre del alimento: " );
    scanf(" %[^\n]", &nombreAlimento );

    printf( "\nIngresa el precio del alimento en pesos mexicanos" );
    printf( "\nPrecio del alimento: " );
    scanf( "%i", &precioAlimento);

    printf( "\nIngresa la fecha de compra del alimento en formato xx/xx/xx" );
    printf( "\nFecha de compra del alimento: " );
    scanf(" %[^\n]", &fechaCompraAlimento );

    printf( "\nIngresa la fecha de caducidad del alimento, en caso de no tener el dato coloca 00/00/00" );
    printf( "\nFecha de caducidad del alimento: " );
    scanf(" %[^\n]", &fechaCaducidadAlimento );

    do {
        
        printf( "\nIngresa el estatus del alimento. Coloca 1 en caso de haber, de lo contrario ingresa 0" );
        printf( "\nEstatus del alimento: " ); 
        scanf( "%i", &estatus );
    }while( estatus != 1 && estatus != 0 );

    printf( "\n" );

    do{
        printf("\nEn que parte deseas agregar este alimento: ");
        printf("\n1- Al principio");
        printf("\n2- En medio");
        printf("\n3- Al final\n");

        printf( "Seleccione la opcion a desear: " );
        scanf( "%i", &opcion );

        switch( opcion ){
            case 1:
                insertar_cabeza( lista, crear_Nodo( crear_Alimento( tipoAlimento, nombreAlimento, precioAlimento, fechaCompraAlimento, fechaCaducidadAlimento, estatus ) ) );
                bandera = 'V';
                break;
            case 2:
                insertar_enmedio(lista, lista->cabeza, ( crear_Nodo( crear_Alimento( tipoAlimento, nombreAlimento, precioAlimento, fechaCompraAlimento, fechaCaducidadAlimento, estatus ) ) ) );
                bandera = 'V';
                break;
            case 3:
                insertar_cola( lista, ( crear_Nodo( crear_Alimento( tipoAlimento, nombreAlimento, precioAlimento, fechaCompraAlimento, fechaCaducidadAlimento, estatus ) ) ) );
                bandera = 'V';
                break;
            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( bandera != 'V' );

}

/**
 * @brief Muestra en pantalla el menú principal.
 * 
 */
void menuGeneral() {

    int opcion;
    ListaS *refrigerador = crear_ListaS();
    ListaS *listaBebidas = crear_ListaS();
    ListaS *listaEmbutidos = crear_ListaS();
    ListaS *listaFrutas = crear_ListaS();
    ListaS *listaLacteos = crear_ListaS();
    ListaS *listaProteinas = crear_ListaS();
    ListaS *listaVerduras = crear_ListaS();
    refrigerador->sig = listaBebidas;
    listaBebidas->sig = listaEmbutidos;
    listaEmbutidos->sig = listaFrutas;
    listaFrutas->sig = listaLacteos;
    listaLacteos->sig = listaProteinas;
    listaProteinas->sig = listaVerduras;

    do{
        printf( "\n\n\n    Bienvenido a la lista de contenido de tu refrigerador\n" );
        printf( "Estos son las categorias de los alimentos que podemos enlistar:\n\n" );
        printf( "\t\t\t  1- Bebidas\n" );
        printf( "\t\t\t  2- Embutidos\n" );
        printf( "\t\t\t  3- Frutas\n" );
        printf( "\t\t\t  4- Lacteos\n" );
        printf( "\t\t\t  5- Proteinas\n" );
        printf( "\t\t\t  6- Verduras\n" );
        printf( "\t\t\t  7- Salir\n" );

        printf( "Dime el numero de la caterogia a la que quieras ingresar: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                menuBebidas(listaBebidas);
                break;
            case 2:
                menuEmbutidos(listaEmbutidos);
                break;
            case 3:
                menuFrutas(listaFrutas);
                break;
            case 4:
                menuLacteos(listaLacteos);
                break;
            case 5:
                menuProteinas(listaProteinas);
                break;
            case 6:
                menuVerduras(listaVerduras);
                break;
            case 7:
                printf( "\n\nGracias por ocupar tu refri pana, nos vemos ;)" );
                //Se libera la lista de listas
                free( listaVerduras );
                free( listaProteinas );
                free( listaLacteos );
                free( listaFrutas );
                free( listaEmbutidos );
                free( listaBebidas );
                free( refrigerador );
                break;
            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }
    }while( opcion != 7 );

}

/**
 * @brief Muestra en pantalla el menú de bebidas.
 * 
 * @param listaBebidas 
 */
void menuBebidas( ListaS *listaBebidas ) {

    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar;

    do{
        printf( "\n\n\nEstas en la seleccion de Bebidas\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar una bebida" );
        printf( "\n\t 2- Quitar una bebida" );
        printf( "\n\t 3- Mostrar la lista de bebidas" );
        printf( "\n\t 4- Buscar una bebida" );
        printf( "\n\t 5- Ordenar bebidas por precio" );
        printf( "\n\t 6- Vaciar lista de bebidas" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaBebidas );
                break;

            case 2:
                if( isEmpty(*listaBebidas) == 1 ){
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son las bebidas actuales..." );     
                    ordenamiento_quicksort( listaBebidas->cabeza, ultimoNodo( listaBebidas->cabeza ) );
                    printLista( listaBebidas );

                    printf( "\n\nIngresa el precio de la bebida a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaBebidas, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaBebidas->cabeza ) {
                        printf("\nLa bebida %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaBebidas);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nLa bebida %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaBebidas );
                    } else {
                        printf("\nLa bebida %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaBebidas , eliminar);
                    }

                    
                }

                break;

            case 3:
                if( isEmpty(*listaBebidas) == 1 ){ 
                    printf( "\n\nerror: La lista se encuentra vacia mi master :v" );
                }
                else{

                    printLista( listaBebidas );
                }

                break;

            case 4:
                if( isEmpty(*listaBebidas) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_quicksort( listaBebidas->cabeza, ultimoNodo( listaBebidas->cabeza ) );
                    printf( "\n\nIngresa el precio de la bebida a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaBebidas, precioBusqueda);

                }

                break;

            case 5:
                if(isEmpty(*listaBebidas) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_quicksort( listaBebidas->cabeza, ultimoNodo( listaBebidas->cabeza ) );
                    printLista( listaBebidas );
                }

                break;

            case 6:
                vaciarLista( listaBebidas );
                printf( "\nLa lista se ha liberado correctamente papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

/**
 * @brief Muestra en pantalla el menú de embutidos.
 * @param ListaS *listaEmbutidos
 */
void menuEmbutidos(ListaS *listaEmbutidos) {
    
    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar; 

    do{
        printf( "\n\n\nEstas en la seleccion de Embutidos\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar un Embutido" );
        printf( "\n\t 2- Quitar un Embutido" );
        printf( "\n\t 3- Mostrar la lista de Embutido" );
        printf( "\n\t 4- Buscar un Embutido" );
        printf( "\n\t 5- Ordenar Embutidos por precio" );
        printf( "\n\t 6- Vaciar lista de Embutidos" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaEmbutidos );
                break;

            case 2:
                if( isEmpty(*listaEmbutidos) == 1 ){
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son los embutidos actuales..." );     
                    ordenamiento_insercion( listaEmbutidos );
                    printLista( listaEmbutidos );

                    printf( "\n\nIngresa el precio del embutido a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaEmbutidos, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaEmbutidos->cabeza ) {
                        printf("\nEl embutido %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaEmbutidos);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nEl embutido %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaEmbutidos );
                    } else {
                        printf("\nEl embutido %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaEmbutidos , eliminar);
                    }

                    
                }

                break;

            case 3:
                if( isEmpty(*listaEmbutidos) == 1 ){ 
                    printf( "\n\nerror: La lista se encuentra vacia mi master :v" );
                }
                else{

                    printLista( listaEmbutidos );
                }

                break;

            case 4:
                if( isEmpty(*listaEmbutidos) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_insercion( listaEmbutidos );
                    printf( "\n\nIngresa el precio del embutido a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaEmbutidos, precioBusqueda);
                }

                break;

            case 5:
                if(isEmpty(*listaEmbutidos) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_insercion( listaEmbutidos );
                    printLista( listaEmbutidos );
                }
                
                break;

            case 6:
                vaciarLista( listaEmbutidos );
                printf( "\nLa lista se ha liberado correctamente papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

/**
 * @brief Muestra en pantalla el menú de frutas.
 * @param ListaS *listaFrutas
 */
void menuFrutas(ListaS *listaFrutas) {
        
    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar;

    do{
        printf( "\n\n\nEstas en la seleccion de Frutas\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar una Frutas" );
        printf( "\n\t 2- Quitar una Fruta" );
        printf( "\n\t 3- Mostrar la lista de Frutas" );
        printf( "\n\t 4- Buscar una Fruta" );
        printf( "\n\t 5- Ordenar Frutas por precio" );
        printf( "\n\t 6- Vaciar lista de Frutas" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaFrutas );

                break;

            case 2: 
                if( isEmpty(*listaFrutas) == 1 ){
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son las frutas actuales..." );     
                    ordenamiento_quicksort( listaFrutas->cabeza, ultimoNodo( listaFrutas->cabeza ) );
                    printLista( listaFrutas );

                    printf( "\n\nIngresa el precio de la fruta a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaFrutas, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaFrutas->cabeza ) {
                        printf("\nLa fruta %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaFrutas);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nLa fruta %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaFrutas );
                    } else {
                        printf("\nLa fruta %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaFrutas , eliminar);
                    }

                    
                }

                break;

            case 3:
                if( isEmpty(*listaFrutas) == 1 ){ 
                    printf( "\n\nerror: La lista se encuentra vacia mi master :v" );
                }
                else{

                    printLista( listaFrutas );
                }
                
                break;

            case 4:
                if( isEmpty(*listaFrutas) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_quicksort( listaFrutas->cabeza, ultimoNodo( listaFrutas->cabeza ) );
                    printf( "\n\nIngresa el precio de la bebida a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaFrutas, precioBusqueda);
                }

                break;

            case 5:
                if(isEmpty(*listaFrutas) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_quicksort( listaFrutas->cabeza, ultimoNodo( listaFrutas->cabeza ) );
                    printLista( listaFrutas );
                }

                break;

            case 6:
                vaciarLista( listaFrutas );
                printf( "\nLa lista se ha liberado correctamente papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

/**
 * @brief Muestra en pantalla el menú de Lacteos.
 * @param ListaS *listaLacteos
 */
void menuLacteos(ListaS *listaLacteos) {
            
    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar;

    do{
        printf( "\n\n\nEstas en la seleccion de Lacteos\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar un Lacteo" );
        printf( "\n\t 2- Quitar un Lacteo" );
        printf( "\n\t 3- Mostrar la lista de Lacteos" );
        printf( "\n\t 4- Buscar un Lacteos" );
        printf( "\n\t 5- Ordenar Lacteos por precio" );
        printf( "\n\t 6- Vaciar lista de Lacteos" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaLacteos );
                break;

            case 2:
                if( isEmpty(*listaLacteos) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son los lacteos actuales..." );     
                    ordenamiento_insercion( listaLacteos );
                    printLista( listaLacteos );

                    printf( "\n\nIngresa el precio del lacteo a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaLacteos, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaLacteos->cabeza ) {
                        printf("\nEl lacteo %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaLacteos);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nEl lacteo %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaLacteos );
                    } else {
                        printf("\nEl lacteo %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaLacteos , eliminar);
                    }

                    
                }

                break;

            case 3: 
                if( isEmpty(*listaLacteos) == 1 ){ 
                    printf( "\n\nerror: Lista se encuentra vacia mi master :v" );
                }
                else{

                    printLista( listaLacteos );
                }

                break;

            case 4:
                if( isEmpty(*listaLacteos) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_insercion( listaLacteos );
                    printf( "\n\nIngresa el precio del lacteo a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaLacteos, precioBusqueda);
                }

                break;

            case 5:
                if(isEmpty(*listaLacteos) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_insercion( listaLacteos );
                    printLista( listaLacteos );
                }
                
                break;

            case 6:
                vaciarLista( listaLacteos );
                printf( "\nLa lista se ha liberado correctamnete papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

/**
 * @brief Muestra en pantalla el menú de Proteinas.
 * @param ListaS *listaProteinas
 */
void menuProteinas(ListaS *listaProteinas) {
    
    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar;

    do{
        printf( "\n\n\nEstas en la seleccion de Proteinas\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar una Proteina" );
        printf( "\n\t 2- Quitar una Proteina" );
        printf( "\n\t 3- Mostrar la lista de Proteinas" );
        printf( "\n\t 4- Buscar una Proteina" );
        printf( "\n\t 5- Ordenar Proteinas por precio" );
        printf( "\n\t 6- Vaciar lista de Proteinas" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaProteinas );
                break;

            case 2:
                if( isEmpty(*listaProteinas) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son las proteinas actuales..." );     
                    ordenamiento_quicksort( listaProteinas->cabeza, ultimoNodo( listaProteinas->cabeza ) );
                    printLista( listaProteinas );

                    printf( "\n\nIngresa el precio de la proteina a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaProteinas, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaProteinas->cabeza ) {
                        printf("\nLa proteina %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaProteinas);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nLa proteina %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaProteinas );
                    } else {
                        printf("\nLa proteina %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaProteinas , eliminar);
                    }
                    
                }

                break;

            case 3:
                if( isEmpty(*listaProteinas) == 1 ){ 
                    printf( "\n\nerror: La lista se encuentra vacia mi master :v" );
                }
                else{

                    printLista( listaProteinas );
                }

                break;

            case 4:
                if( isEmpty(*listaProteinas) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_quicksort( listaProteinas->cabeza, ultimoNodo( listaProteinas->cabeza ) );
                    printf( "\n\nIngresa el precio de la proteina a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaProteinas, precioBusqueda);
                }

                break;

            case 5:
                if(isEmpty(*listaProteinas) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_quicksort( listaProteinas->cabeza, ultimoNodo( listaProteinas->cabeza ) );
                    printLista( listaProteinas );
                }

                break;

            case 6:
                vaciarLista( listaProteinas );
                printf( "\nLa lista se ha liberado correctamente papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

/**
 * @brief Muestra en pantalla el menú de verduras.
 * @param ListaS *listaVerduras
 */
void menuVerduras(ListaS *listaVerduras) {
                    
    Nodo *eliminar;

    int opcion;
    int precioBusqueda;
    int precioQuitar;

    do{
        printf( "\n\n\nEstas en la seleccion de Verduras\n" );
        printf( "\n\t Que deseas hacer: \n" );
        printf( "\n\t 1- Ingresar una Verdura" );
        printf( "\n\t 2- Quitar una Verdura" );
        printf( "\n\t 3- Mostrar la lista de Verdura" );
        printf( "\n\t 4- Buscar una Verdura" );
        printf( "\n\t 5- Ordenar Verduras por precio" );
        printf( "\n\t 6- Vaciar lista de Verduras" );
        printf( "\n\t 7- Salir" );

        printf( "\nDime el numero de lo que quieres hacer: " );
        scanf( "%i", &opcion );

        switch( opcion ) {
            case 1:
                listaConsola( listaVerduras );
                break;

            case 2:
                if( isEmpty(*listaVerduras) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    printf( "\nEstas son las verduras actuales..." );     
                    ordenamiento_quicksort( listaVerduras->cabeza, ultimoNodo( listaVerduras->cabeza ) );
                    printLista( listaVerduras );

                    printf( "\n\nIngresa el precio de la verdura a eliminar: " );    
                    scanf( "%i", &precioQuitar );

                    eliminar = busquedaBinaria( listaVerduras, precioQuitar );

                    if ( eliminar == NULL ) {
                        printf("\nEl alimento ya no se encontraba en la lista");
                        break;
                    }
                    if ( eliminar == listaVerduras->cabeza ) {
                        printf("\nLa verdura %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cabeza(listaVerduras);
                    } else if ( eliminar->sig == NULL ) {
                        printf("\nLa verdura %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_cola( listaVerduras );
                    } else {
                        printf("\nLa verdura %s ha sido eliminada correctamente del refri.",eliminar->datos->nombreAlimento);
                        quitar_enmedio( listaVerduras , eliminar);
                    }

                    
                }

                break; 

            case 3:
                if( isEmpty(*listaVerduras) == 1 ){
                    printf( "\n\nerror: La lista se encuentra vacia mi master" );
                }
                else{

                    printLista( listaVerduras );
                }

                break;

            case 4:
                if( isEmpty(*listaVerduras) == 1 ){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }
                else{

                    ordenamiento_insercion( listaVerduras );
                    printf( "\n\nIngresa el precio de la verdura a buscar: " );
                    scanf( "%i", &precioBusqueda );
                    busquedaBinaria( listaVerduras, precioBusqueda);
                }

                break;

            case 5:
                if(isEmpty(*listaVerduras) == 1){ 
                    printf( "\n\nLa lista se encuentra vacia" );
                }else{

                    ordenamiento_insercion( listaVerduras );
                    printLista( listaVerduras );
                }
                
                break;

            case 6:
                vaciarLista( listaVerduras );
                printf( "\nLa lista se ha liberado correctamenre papu :v" );
                break;

            case 7:
                break;

            default:
                printf( "\nOpcion no valida, " );
                printf( "ingrese otra opcion por favor\n" );
                break;
        }

    }while( opcion != 7 );
}

//Función principal
int main() {

    menuGeneral();

    return 0;
}