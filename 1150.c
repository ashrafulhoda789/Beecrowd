#include<stdio.h>
int main()
{
    int x,z;
    int sum=0,count=0,i;
    scanf("%d",&x);
    scanf("%d",&z);

    while(z==x || z<x)
    {
        scanf("%d",&z);
    }

    for(i=x; i<z; i++)
    {
        sum = sum+i;
        
        count++;
        if(sum>z)
        {
           break;
        }
        
    }
    printf("%d\n",count);
}