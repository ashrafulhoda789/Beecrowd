#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        int number,j,sum=0;
        scanf("%d",&number);
        for(j=1; j<number; j++)
        {
            if(number%j==0)
            {
                sum = sum+j;
            }
        }
        if(sum==number)
        {
            printf("%d eh perfeito\n",number);
        }
        else
        {
            printf("%d nao eh perfeito\n",number);
        }
    }
}