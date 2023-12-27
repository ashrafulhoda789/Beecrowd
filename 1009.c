#include<stdio.h>
int main()
{
    double a,b,total;
    char name;
    scanf("%s %lf %lf",&name,&a,&b);

    total = a+(b*.15);

    printf("TOTAL = R$ %.2lf\n",total);
}