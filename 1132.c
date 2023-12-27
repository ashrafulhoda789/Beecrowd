#include<stdio.h>
int main()
{
    int x,y,temp;
    scanf("%d %d",&x,&y);

    if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        int sum = 0;
    for(int i=x; i<=y; i++)
    {
        if(i%13!=0)
        {
            sum +=i;
        }
    }
    printf("%d\n",sum);
}
