//Libraries
#include<stdio.h>


//Prototype functions
void creatingBoard();
void markingBoard( int, char );
int checkForWin();


//Initialization of the box
char box[10] = { '0', '1', '2', '3', '4', '5', '6', '7' ,'8', '9' };


//Main function
int main(){

    //Variable declaration
    int choise;
    char mark;
    int player = 1;
    int i;
    
    do{
         
        creatingBoard();
        player = ( player % 2 ) ? 1: 2;

        printf( "Jugador %d, ingrese un numero: ", player );
        scanf( "%d", &choise );

        mark = ( player == 1 ) ? 'X': '0';
        markingBoard( choise, mark );

        i = checkForWin();
        player++;

    }while( i == -1 );

    creatingBoard();

    if( i == 1 ){
        printf( "Jugador %i ha ganado el juego", --player );
    }else{
        printf( "\n\nNadie ha gando\n\n" );
    }

    return 0;
}


//Function that creates the board
void creatingBoard(){

    printf( "\n\n\tTic Tac Toe\n\n" );
    printf( "Player 1 (X) --- Player 2 (0)\n\n" );
    printf( "     |     |     \n" );
    printf( "  %c  |  %c  |  %c  \n", box[1], box[2], box[3] );
    printf( "_____|_____|_____\n" );
    printf( "     |     |     \n" );
    printf( "  %c  |  %c  |  %c  \n", box[4], box[5], box[6] );
    printf( "_____|_____|_____\n" );
    printf( "     |     |     \n" );
    printf( "  %c  |  %c  |  %c  \n", box[7], box[8], box[9] );
    printf( "     |     |     \n" );
}


//Board marking function
void markingBoard( int choise, char mark ){

    if( choise == 1 && box[1] == '1' ){
        box[1] = mark;
    }
    else if( choise == 2 && box[2] == '2' ){
        box[2] = mark;
    }
    else if( choise == 3 && box[3] == '3' ){
        box[3] = mark;
    }
    else if( choise == 4 && box[4] == '4' ){
        box[4] = mark;
    }
    else if( choise == 5 && box[5] == '5' ){
        box[5] = mark;
    }
    else if( choise == 6 && box[6] == '6' ){
        box[6] = mark;
    }
    else if( choise == 7 && box[7] == '7' ){
        box[7] = mark;
    }
    else if( choise == 8 && box[8] == '8' ){
        box[8] = mark;
    }
    else if( choise == 9 && box[9] == '9' ){
        box[9] = mark;
    }
    else{
        printf( "Movimiento invalido" );
    }
}


//Check the winner function
int checkForWin(){

    //Horizontal match
    if( box[1] == box[2] && box[2] == box[3] ){
        return 1;
    }
    else if( box[4] == box[5] && box[5] == box[6] ){
        return 1;
    }
    else if( box[7] == box[8] && box[8] == box[9] ){
        return 1;
    }

    //Vertical match
    else if( box[1] == box[4] && box[4] == 7 ){
        return 1;
    }
    else if( box[2] == box[5] && box[5] == box[8] ){
        return 1;
    }
    else if( box[3] == box[6] && box[6] == box[9] ){
        return 1;
    }

    //Diagonal match
    else if( box[1] == box[5] && box[5] == box[9] ){
        return 1;
    }
    else if( box[3] == box[5] && box[5] == box[7] ){
        return 1;
    }

    //Extra cases
    else if( box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}