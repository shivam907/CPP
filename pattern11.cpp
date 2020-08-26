#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=3; j>=i; j--)
        {
            cout<<"* ";
        }
        if(i==2)
        {
            cout<<"    ";
        }
        if(i==3)
        {
            cout<<"        ";
        }
        for(int k=3; k>=i; k--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        if(i==2)
        {
            cout<<"    ";
        }
        if(i==1)
        {
            cout<<"        ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}