#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int k=5; k>=i; k--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }cout<<endl;
    }
    return 0;
}