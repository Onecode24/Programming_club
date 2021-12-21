#include "myheaders.h"
//#include <stdio.h>

/*
* Concatenates a certain amount of characters of two strings 
*/

char *_strcat(char *dest, char *src){
    int n=0,i=0;
    while(dest[n]!='\0'){
        n++;
    }
    while(src[i]!='\0'){
        dest[n++]=src[i];
        i++; 
    }
    dest[n]='\0';

    return dest;
}
