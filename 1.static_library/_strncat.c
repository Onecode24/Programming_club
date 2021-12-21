#include "myheaders.h"

/*
* Add n characters of src to the end of dest
*/
char *_strncat(char *dest, char *src, int *n){

int m=0,i=0;
    while(dest[m]!='\0'){
        m++;
    }
    while(*src){
        if(i<5){
        dest[m]=*src;
        src++;
        m++;
        i++;
        }else{
            dest[m]='\0';
            break;
        }
    }
    
    return dest;

}
