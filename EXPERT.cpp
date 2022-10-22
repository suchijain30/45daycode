#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int x, y, z ;
      cin>>x >> y ;
      z= (y *100/x);
      if( z>=50)
      {
          cout<<"yes"<<endl;
      }
      else 
      {
          cout<<"no"<<endl;
      }
      
    }
	return 0;
}
