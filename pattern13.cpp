#include <iostream>
using namespace std;
int main()
{
    int a=8, c=0;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=a; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i+c; k++)
        {
            if(k==1 or k==i+c)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<"0 ";
            }
            
        }
        cout<<endl;
        c++;
        a-=2;
    }
    return 0;
}