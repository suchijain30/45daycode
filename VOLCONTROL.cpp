#include <iostream>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
      int X ,Y ;
      cin>> X>> Y ;
      std::cout << abs(X-Y) << std::endl;
    }
	return 0;
}

