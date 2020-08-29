#include <iostream>
using namespace std;
int main()
{
    long n, a=1;
    cout<<"Enter Number  ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        a*=i;
    }
    cout<<a;
    return 0;
}