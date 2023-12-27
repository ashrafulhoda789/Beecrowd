#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>> t;
    for(i=0; i<t; i++)
    {
        int number,j,sum=0;
        cin>> number;
        for(j=1; j<number; j++)
        {
            if(number%j==0)
            {
                sum = sum+j;
            }
        }
        if(sum==number)
        {
            cout << number;
            cout << " eh perfeito" <<endl;
        }
        else
        {
            cout << number;
            cout << " nao eh perfeito" <<endl;
        }
    }
}