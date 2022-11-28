#include <iostream>
using namespace std;
int binary_search(int a[], int key, int low, int high)
{
    int mid ;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return binary_search(a, key, low, mid - 1);
        }
        else
        {
            return binary_search(a, key,mid + 1, high);
        }
        
    }
return -1;
}
int main()
{ 
    int n ;
    int a[n];
    cin>>n;
    for (int i= 0; i<n ; i++)
    cin>>a[i];
    int key ;
    cout<<binary_search (a[n], key );
   return 0 ;
}