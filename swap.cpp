#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"Function "<<endl<<"A : "<<a<<endl<<"B : "<<b<<endl;
}
int main()
{
    int x=10, y=100;
    cout<<endl<<"Values"<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
    swap(x, y);
    cout<<endl<<"AFTER  "<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
    return 0;
}