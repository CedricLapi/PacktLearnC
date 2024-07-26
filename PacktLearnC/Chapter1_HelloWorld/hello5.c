

/* 
*hello4.c
*function calling and function parameter in C Programming
*by Cedric Lapi
*created 2024/07/26
 */

#include <stdio.h>

void printGreeting ( char* greeting , char* who) {
    
    printf( "%s, %s!\n" , greeting , who );
    
}


int main( void ) {
    printGreeting( "Hello" , "world" );
    printGreeting( "Good day" , "Your Royal Highness" );
    printGreeting( "Howdy" , "John Q. and Jane P. Doe" );
    printGreeting( "Hey" , "Moe, Larry, and Curly" );
    return 0;
}

    /* eof */
