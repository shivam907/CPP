#include <iostream>
using namespace std;

int main()
{
    int a, d, n, an, sn=0;
    cout<<"Enter starting Value ";
    cin>>a;
    cout<<"Enter diff of a AP ";
    cin>>d;
    cout<<"Enter N'th term ";
    cin>>n;
    for(int i=a; i<=n; i+=d)
    {
        cout<<i<<endl;
        sn+=i;
    }
    cout<<"SUM  "<<sn;
    return 0;
}