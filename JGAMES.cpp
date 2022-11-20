#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
       int X , Y ;
       cin>>X>>Y ;
       for(int i = 0;i<Y;i++)
       {
           if(X%2==0)
           {
               X--;
           }
           else
            X++;
       }
       if(X%2==0)
        std::cout << "janmansh" << std::endl;
        else
            std::cout << "jay" << std::endl;
    }
	return 0;
}
