#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i;
    for(i=0; i<10; i++)
    {
        cin>> arr[i];
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]<=0)
        {
            arr[i] = 1;
        }
    }
    for(i=0; i<10; i++)
    {
        cout << "X[" << i << "] = " <<arr[i] << endl;
    }
}