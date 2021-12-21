#include "myheaders.h"

/*
* Returns the length of the maximum initial segment that consists
* of only the characters not found in another byte string 
*/
unsigned int _strspn(char *s,char *accept){
    int i=0, j=0, verif=0;
    unsigned int count=0;
    char *temp=s;
    while(*s){
        while( accept[j]!='\0'){
            if(accept[j]==*s){
                verif=1;
            }
            j++;
        }
        if(!verif)
        return count;
        verif=0;
        j=0;
        s++;
        count++;
    }
    return 0;
}



