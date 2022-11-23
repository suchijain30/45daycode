#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int n , a , b , count=0;
      cin>>n>>a>>b ;
      while (n>1)
      {
       count++;
       n=n/2;
      }
      cout<<count*a+(count-1)*b<<endl;
    }
	return 0;
}
