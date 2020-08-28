                                                        
//     * * * * * * * * * * * 
//   *                       * 
// *                           *              29   15     13   11   9
//   *                       *                25   15-1    15-3
//     *                   *                                       
//       *               *                                         
//         *           *                                           
//           *       *                                             
//             *   *                                           
//               *

#include <iostream>
using namespace std;
int main()
{
  int a=0;
    for(int i=1; i<=2; i++)
    {
      for(int j=2; j>=i; j--)
      {
      cout<<"  ";
      }
    for(int k=11; k>=i-a; k--)
    {
      if(k==11 || i==1 ||k==i-a)
      {
        cout<<" *";
      }
      else
      {
        cout<<"  ";
      }
      
    }
    cout<<endl;
    a+=3;
    }
    for(int i=1; i<=15; i+=2)
    {
      for(int j=1; j<=i; j++)
      {
        cout<<" ";
      }
      for(int k=15; k>=i; k--)
      {
        if(k==15 || k==i )
        {
        cout<<"* ";
        }
        else
        {
          cout<<"  ";
        }
        
      }
      cout<<endl;

    }

    return 0;
}                                          
       
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
