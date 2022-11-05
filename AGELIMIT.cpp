#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int X, Y , A ;
      cin>>X>>Y>>A ;
      if(A>=X)
      {
          if(A<Y)
          cout<<"yes"<<endl;
          else
          cout<<"NO"<<endl;
      }
      else
      cout<<"NO"<<endl;
      
    }
	return 0;
}
