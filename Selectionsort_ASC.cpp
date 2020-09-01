#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int minindex;
    for(int i=0; i<4; i++)
    {
        minindex=i;
        for(int j=i+1; j<5; j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        arr[minindex]=arr[minindex]+arr[i];
        arr[i]=arr[minindex]-arr[i];
        arr[minindex]=arr[minindex]-arr[i];
    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}