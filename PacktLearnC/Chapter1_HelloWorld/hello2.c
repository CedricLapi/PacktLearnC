/* 
* hello2.c
* My first C program with comments.
* by Cedric Lapi
* created 2024/07/24
 */


#include <stdio.h>


void printComma() {
    printf( ", ");
    return;
}


int main(void)
{
    printf( "Hello" );

    printComma();

    printf( "world!\n" );

    return 0;
}



/* eof */