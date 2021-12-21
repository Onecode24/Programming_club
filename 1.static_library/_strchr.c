#include "myheaders.h"

/*
* Finds the first occurrence of c (after conversion to char as if by (char) c) 
* in the null-terminated byte string pointed to by s (each character interpreted 
* as unsigned char)
*/

char *_strchr(char *s,char c){
    int i=0;
    while( *s){
        if(*s==c){
            return s;
        }else{
            s++;
        }
    }
}
