#include "myheaders.h"

/*
* Computes absolute value of a floating-point value (|x|) 
*/

int _abs(int n){
    if(n>=0){
        return n;
    }else{
        return (-1*n);
    }
}
