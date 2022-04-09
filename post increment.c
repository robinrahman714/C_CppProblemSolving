#include<stdio.h>
int main(){
int x = 4;
int *p = &x;
int *k = p++;
int r = p-k;
printf("%d\n",r);
return 0;
}
