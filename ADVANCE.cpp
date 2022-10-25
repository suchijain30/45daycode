#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int x  , y  , z ;
      cin>>x >>y ;
       z=x+200 ;
      if ( x <= y && z>=y )
      cout<<"yes"<<endl;
      else 
      cout<<"no"<<endl;
    }
	return 0;
}
