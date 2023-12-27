#include<stdio.h>
int main()
{
    float i,j;

    for(i=0; i<=3; i= i+0.2)
    {
        for(j=1+i; j<=3; j++)
        {
            printf("I=%.1f J=%.1f\n",i,j);
        }
    }
}