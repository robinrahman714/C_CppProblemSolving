#include<stdio.h>
int main(){
char name;
double salary, value, total;
scanf("%s %lf %lf",&name,&salary,&value);
total = ((value*15)/100)+salary;
printf("TOTAL = R$ %.2lf\n",total);
return 0;
}
