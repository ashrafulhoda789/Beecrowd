#include<iostream>
using namespace std;
int main()
{
    int N[10];
    int i,x;
    cin >> x;
    for(i=0; i<10; i++)
    {
        N[i] = x;
        cout << "N[" << i << "] = " <<N[i] <<endl;
        x = x*2; 
    }
}