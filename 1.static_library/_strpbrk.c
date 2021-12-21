#include "myheaders.h"


/*
* returns the length of the maximum initial segment that consists
* of only the characters not found in another byte string 
*/

char *_strpbrk(char *s, char *accept){
    int i=0,j=0;
    char *temp;
    while(*s){
        while( accept[j]!='\0'){
            if(accept[j]==*s)
                return s;
                j++;
        }
        j=0;
        s++;
    }
    return '\0';
}