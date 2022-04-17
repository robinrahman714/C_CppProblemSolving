#include <stdio.h>
int main(){
    char *ptr;
    char string[]="hello world";
    ptr =string;
    ptr+=6;
    printf("%s",ptr);
    return 0;
}


