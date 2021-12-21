#include "myheaders.h"

/*
* Copies a certain amount of characters from one string to another 
*/

char *_strcpy(char *dest,char *src){
    int c=0;
    while(src[c]!='\0'){
        dest[c]=src[c];
        c++;
    }
    dest[c++]='\0';
    return dest;
}
