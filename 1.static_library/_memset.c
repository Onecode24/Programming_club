#include "myheaders.h"


/*
* Copies one buffer to another  
*/

char *_memset(char *s,char b,unsigned int n){
    int i=0;
    for(i; i<n; ++i){
        s[i]=b;
    }
    return s;
}

