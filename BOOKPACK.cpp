#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int X,Y,Z;
      cin>>X>>Y>>Z;
      if(Z>=Y)
      cout<<X<<endl;
      else
      {
          if(Y%Z==0)
          cout<<X*(Y/Z)<<endl;
          else
          cout<<X*(Y/Z+1)<<endl;
      }
      
    }
	return 0;
}
