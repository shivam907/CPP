//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

// 8
// 6
// 4
// 2

// 1
// 3
// 5
// 7
// 9

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
            cout<<k<<" ";
        }
        cout<<endl;
        c++;
        a-=2;
    }
    return 0;
}

