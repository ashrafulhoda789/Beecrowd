#include<iostream>
#include<iomanip>
using namespace std;
class arraySelection
{
    public:
    void display();
};
void arraySelection :: display()
{
    double arr[100];
    double x;
    
    for(int i=0; i<100; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    for(int i=0; i<100; i++)
    {
        if(arr[i]<=10)
        {
            cout << fixed <<setprecision(1);
            
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}
int main()
{
    arraySelection obj;
    obj.display();
    return 0;
}