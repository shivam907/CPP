#include <iostream>
using namespace std;
int main()
{
    int n, a=0, b=1, c;
    cout<<"Enter value of N ";
    cin>>n;
    cout<<endl<<a<<" ";
    for(int i=2; i<=n; i++)
    {
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}