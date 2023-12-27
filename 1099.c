#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,sum,temp;

    while(1){
        if(n==0)
        {
            break;
        }
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        sum = 0;
        for(int i=x+1; i<y; i++)
        {
            if(i%2!=0)
            {
                sum +=1;
            }
        }
        printf("%d",sum);
        n--;
    }
}
