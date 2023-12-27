#include<stdio.h>
int main()
{
    double i,s=0,b=1,c;

    for(i=1; i<39; i=i+2)
    {
        c=i/b;
        s = s+c;
        b = b*2;
    }
    printf("%.2lf\n",s);
}