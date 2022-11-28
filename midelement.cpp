#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while (t--)
    {
        int a , b , c ;
        cin>>a>>b>>c;
        if(b>a && a>c)
        cout<<a<<endl;
        else if (c>a && a>b)
        cout<<a<<endl;
        else if(a>b && b>c)
        cout<<b<<endl;
        else if(c>b && b>c)
        cout<<b<<endl;
        else if(a>c && c>b)
        cout<<c<<endl;
        else if(b>c && c>a)
        cout<<c<<endl;
    }   
    return 0 ;
}