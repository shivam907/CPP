#include <iostream>
using namespace std;
int main()
{
    int a=1;
    for(int i=1; i<=5; i++)
    {
        // for(int j=5; j>=i;j--)
        // {
        //     cout<<" ";
        // }
        for(int k=1; k<=i; k++)
        {
            
            
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}