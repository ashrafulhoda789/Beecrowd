#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int number,j,count=0;
        scanf("%d",&number);
        for(j=2; j<number; j++)
        {
            if(number%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d eh primo\n",number);
        }
        else
        {
            printf("%d nao eh primo\n",number);
        }
    }
}