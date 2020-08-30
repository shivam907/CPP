#include <iostream>
using namespace std;
void change(int n)
{
    n=n*n;
    cout<<"Value in Function : "<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter Value ";
    cin>>n;
    change(n);
    cout<<"Value in main : "<<n;
    return 0;
}