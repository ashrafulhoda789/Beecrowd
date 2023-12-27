#include<iostream>
using namespace std;
class arrayChange
{
    public:
    void display();
};
void arrayChange :: display()
{
    int arr[20];

    for(int i=19; i>=0; i--)
    {
        cin >> arr[i];
    }
    for(int i=0; i<20; i++)
    {
        cout << "A[" << i << "] = " << arr[i] << endl;
    }
}
int main()
{
    arrayChange obj;
    obj.display();
    return 0;
}