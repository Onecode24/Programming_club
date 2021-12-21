#include "myheaders.h"

/*
* Copies one string to another 
*/

char *_strncpy(char *dest, char *src, int *n){
    int i=0,m=0,j;
    for(i; i<*n; ++i){
        if(*src!='\0'){
            dest[m]=*src;
            src++;
        }else{
            dest[m]='\0';
        }
        m++;
    }
    return dest;
}