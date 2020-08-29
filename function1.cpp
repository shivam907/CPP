#include <iostream>
using namespace std;

void pow(int n, int p)
{
    int a=1;
    for(int i=1; i<=p; i++)
    {
        a*=n;
    }
    cout<<"Power "<<a<<endl;
}
int main()
{
    int n, p;
    cout<<"Enter Number  ";
    cin>>n;
    cout<<"Enter Power  ";
    cin>>p;
    pow(n, p);
    return 0;
}