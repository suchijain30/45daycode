#include<iostream>
using namespace std;
int main ()
{
    int n , f  = 0 , z =1  ,t   ;
    
    cin>>n; 
 for( int i = 0 ; i <=n ; i++)
 {
   t = f + z ;
   f=z;
   z=t ;
   cout<< t ;
 }
} 

