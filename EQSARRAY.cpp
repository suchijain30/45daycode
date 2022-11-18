#include <iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      
        int N, K, count = 0;
        cin >>N>>K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == K && i != N-1 )
            {
                count++;
                break;
            }
        }
        if (count > 0)
            cout << "yes" << endl;
        else if (N == 1 && K == arr[0])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
      
    }
	return 0;
}
