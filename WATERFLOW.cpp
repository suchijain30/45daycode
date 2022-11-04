#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
       int W, X, Y , Z, total ;
       cin>>W>>X>>Y>>Z;
       total=W+(Y*Z);
       if(total==X)
       cout<<"filled"<<endl;
       else if (total>X)
       cout<< "overflow"<<endl;
       else 
       cout<<"Unfilled"<<endl;
    }
	return 0;
}
