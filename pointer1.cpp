#include <iostream>
using namespace std;
int main()
{
    int x=5;
    int *ptr = &x;
    cout<<"Address of "<<x<<" is "<<ptr<<&x<<endl;
    cout<<"Address of "<<x<<" is "<<ptr<<&x<<endl;
    return 0;
}