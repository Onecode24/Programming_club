#include "myheaders.h"


/*
* Copies n characters from the object pointed to by src to the object pointed to
* by dest. Both objects are interpreted as arrays of unsigned char.
*/

char *_memcpy(char *dest, char *src, unsigned int n){
    int i=0;
    for(i; i<n; ++i){
        dest[i]=src[i];
    }
    return dest;
}