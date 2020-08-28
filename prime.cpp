#include <iostream>
using namespace std;
int main()
{
    int n, a=0;
    cout<<"Enter Number ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            a+=1;
        }
    }
    if(a==1)
    {
        cout<<"Prime No"<<endl;
    }
    else
    {
        cout<<"Not :(";
    }
    
    return 0;
}