#include<stdio.h>
int main()
{
    int age,sum=0;
    double avg,number=0;

    while(1){
        scanf("%d",&age);

        if(age<0)
        {
            break;
        }
        else
        {
            sum = sum+age;
            number++;
        }
    }
    avg = sum/number;
    printf("%.2lf\n",avg);
}