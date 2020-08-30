#include <iostream>
using namespace std;
void change(int &no)
{
    no=no*no;
    cout<<"Value in function : "<<no<<endl;
}
int main()
{
    int n;
    cout<<"Enter Value : ";
    cin>>n;
    change(n);
    cout<<"Value in main : "<<n;
}