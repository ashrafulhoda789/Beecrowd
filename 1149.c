#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d %d",&a,&n);

    while(n==0 || n<0){
        scanf("%d",&n);
    }
       
        for(int i=0; i<n; i++)
        {
            sum = sum+a+i;
        }
        printf("%d\n",sum);
    
}