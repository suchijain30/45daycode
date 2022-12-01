#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int n ;
      cin>>n ;
      string b[n];
      if(n%2==0)
      cout<<n/2<<endl;
      else
      cout<<(n-1)/2<<endl;
    }
	return 0;
}
