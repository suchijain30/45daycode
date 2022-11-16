#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      int A , B , Z ;
      bool prime = true;
      cin>>A>>B ;
      Z=A+B ;
      Z>=1;
      Z<=12;
      if( Z==2 || Z==3 ||Z== 5  ||Z==7 ||Z==11)
      {
          prime= true ;
      }
      else
      {
          prime = false ;
      }
      if(prime)
      cout<<"Alice"<<endl;
      else
      cout<<"Bob"<<endl;
    }
      return 0 ;
    }