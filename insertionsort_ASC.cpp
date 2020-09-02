#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int miniindex, temp;
    for(int i=0; i<4; i++)
    {
        miniindex=i;
        for(int j=i+1; j<5; j++)
        {
            if(arr[miniindex]>arr[j])
            {
                miniindex = j;

            }
        }
        temp=arr[i];
        arr[i]=arr[miniindex];
        arr[miniindex]=temp;

    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}