#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    { 
       int p1,p2,p3,p4 , count=0 ;
       cin>>p1>>p2>>p3>>p4;
       if(p1 >=10)
       {
           count++;
       }
       if( p2 >=10)
       {
         count++;  
       }
       if( p3 >=10)
       {
         count++;  
       }
       if( p4 >=10)
       {
           count++;
       }
       cout<<count<<endl;
	return 0;
}
}
