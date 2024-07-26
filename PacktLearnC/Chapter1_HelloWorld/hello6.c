

/* 
*hello4.c
*function calling and function parameter in C Programming
*by Cedric Lapi
*created 2024/07/26
 */


#include <stdio.h>

void printAGreeting ( char* greeting ) {
    printf( "%s" , greeting ); 
}

void printAComma ( void ) {
    printf( ", " );
}

void printAnAddressee ( char* aName ) {
    printf( "%s" , aName );

}

void printANewLine ( void ) {
    printf( "\n" );
}


void printGreeting ( char* aGreeting , char* aName ) {

    printAGreeting( aGreeting );
    printAComma();
    printAnAddressee( aName );
    printANewLine();
};



int main ( void ) {
    
    printGreeting ( "Hi" , "Bub");

}


    /* eof */
