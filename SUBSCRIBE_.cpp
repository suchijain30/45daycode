#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
     int n , x , z ;
     cin>>n>>x ;
     z= (n/6) + (n%6?1:0)  ;
     if ( n<=6 )
     {
         cout<<n*x <<endl;
     }
     else
     {
         cout<< z*x <<endl;
     }
      
    }
	return 0;
}
