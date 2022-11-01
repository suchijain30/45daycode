#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
       int N , M , x;
      
       cin>>N >>M ;
        x=(N/M);
       if((N%M)!= 0 )
        {
            cout<<"no"<<endl;
        }
       
       else if (x%2==0)
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
