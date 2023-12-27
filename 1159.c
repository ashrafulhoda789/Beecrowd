#include<stdio.h>
int main()
{
    int n,i,sum=0;
    

    while(1){
        scanf("%d",&n);
        sum=0;
        if(n==0)
        {
            break;
        }
        if(n%2==0)
        {
            for(i=0; i<5; i++)
            {
                sum = sum + n;
                n = n+2;
            }
            printf("%d\n",sum);
        }

        else
        {
            n++;
            for(i=0; i<5; i++)
            {
                sum = sum + n;
                n = n+2;
            }
            printf("%d\n",sum);
            
        }
    }
    
    
}