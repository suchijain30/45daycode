#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int X, Y , b, c;
      cin>>X>>Y ;
      b=2*X;
      c=5*Y;
      if(b>c)
      cout<<"chocolate"<<endl;
      else if (c>b)
      cout<<"candy"<<endl;
      else
      cout<<"Either"<<endl;
    }
	return 0;
}
