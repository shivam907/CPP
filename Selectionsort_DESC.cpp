#include <iostream>
using namespace std;
int main()
{
    int arr[5], min, temp;
    for(int i=0; i<=4; i++)
    {
        cin>>arr[i];
    }
    for(int i=4; i>0; i--)
    {
        min=0;
        for(int j=1; j<=i; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}