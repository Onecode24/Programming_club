#include "myheaders.h"

/*
* Compares a certain amount of characters of two strings 
*/

int _strcmp(char *s1, char *s2){
    int n1=0,n2=0;
    while(s1[n1]!='\0'){
        n1++;
    }
     while(s2[n2]!='\0'){
        n2++;
    }
    if(n1==n2){
        return 0;
    }else if(n1>n2){
        return (n1-n2);
    }else if(n2>n1){
        return (n2-n1);
    }
}

