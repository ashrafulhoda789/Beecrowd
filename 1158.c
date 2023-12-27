#include<stdio.h>
int main()
{
    int t,x,y,i,j,c;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);


        if(x%2==1)
        {
            c=0;
            for(j=1; j<=y; j++)
        {
            c = c+x;
            x = x+2;
        }
        printf("%d\n",c);
        }
        else
        {
            x++;
            c=0;
            for(j=1; j<=y; j++)
            {
                c = c+x;
                x = x+2;
            }
            printf("%d\n",c);
        }
        
    }
}