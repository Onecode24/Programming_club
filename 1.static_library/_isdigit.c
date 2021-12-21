#include "myheaders.h"


/*
* Checks if a wide character is a digit  
*/

int _isdigit(int c){
    if(c>=0 && c<=9){
        return 1;
    }else{
        return 0;
    }
}

