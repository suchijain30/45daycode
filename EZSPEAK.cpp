#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        int n,count=0;
        std::cin >> n;
        string s;
        std::cin >> s;
        for(int i = 0; i<n;i++)
        {
            if(count>=4)
            {
                break;
            }
            if(s[i]=='a'|| s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            {
                count=0;
            }
            else
            {
                count++;
            }
        }
      if(count>=4)
        std::cout << "No" << std::endl;
        else
            std::cout << "Yes" << std::endl;
      
    }
	return 0;
}
