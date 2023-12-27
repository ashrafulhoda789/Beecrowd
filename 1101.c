#include<stdio.h>
int main()
{
    int x,y,temp;
    int sum;

    while(1)
    {
        scanf("%d %d",&x,&y);

        if(x<=0 || y<=0)
        {
            break;
        }

        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }

        sum = 0;
        for(int i=x; i<=y; i++)
        {
            printf("%d ",i);
            sum +=i;
        }
        printf("Sum=%d\n",sum);


    }


}
