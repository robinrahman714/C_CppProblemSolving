#include <stdio.h>
int main()
{
    int id, hours;
    float salary;
    scanf("%d%d%f", &id, &hours,&salary);
    printf("NUMBER = %d\n",id);
    printf("SALARY = U$ %.2f\n",hours*salary);
    return 0;
}
