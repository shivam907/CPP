#include <iostream>
using namespace std;
void sum(int a, int b)
{
    int s=a+b;
    cout<<"Sum of INT is : "<<s<<endl;
}
void sum(float a, float b)
{
    float s=a+b;
    cout<<"Sum of INT is : "<<s<<endl;
}
int main()
{
    int a, b;
    cout<<"Enter Value 1 ";
    cin>>a;
    cout<<"Enter Value 2 ";
    cin>>b;
    sum(a, b);
    cout<<endl;
    float c, d;
    cout<<"Enter Value 1.0 ";
    cin>>c;
    cout<<"Enter Value 1.1 ";
    cin>>d;
    sum(c, d);
    return 0;
}