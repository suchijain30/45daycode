#include<iostream>
using namespace std;
int main()
{
    int n , i , j , min ;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    cout<<"elements"<<endl;
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }
for (int j=0 ; j<n ;j++)
{
    min = j;
    for(int i= j+1 ; i<n ;i++)
    {
        if (arr[i]< arr[min])
        {
            min=i;
        }
    }
    swap (arr[min], arr[j]) ;
}
cout<<"sorted array"<<endl;
for(int i=0 ; i<n ;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}
