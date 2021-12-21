#include "myheaders.h"

/*
* Writes every character from the null-terminated string str and one additional 
* newline character '\n' to the output stream stdout
*/

void _puts(char *s){
    int n=0,i;
    char *c;
    while(*s){
        s++;
    }
    *(s++)='\n';
}

