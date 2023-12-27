#include<stdio.h>
int main()
{
    int a,b,n,m=1,l,j,k;
    scanf("%d %d",&a,&n);

    k=n/a;
    l=a;

    for(int i=1; i<=k; i++)
    {
        printf("%d",m);
        for(j=m+1; j<=l; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        m = m+a;
        l = l+a;
    }
    return 0;
}
