#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *p = &x;
    int **q = &p;
    cout<<"x = "<<x<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;
    cout<<"**q = "<<**q<<endl;
    return 0;
}