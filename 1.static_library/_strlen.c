#include "myheaders.h"

/*
* Returns the length of a wide string
*/

int _strlen(char *s){
    int i=0;
    while(*(s+i)!='\0'){
        i++;
    }
    return i;
}
