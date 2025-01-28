#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter digit for array"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int maxi=arr[0];

    for(int i=0 ; i<n ; i++)
    {
        maxi= max(maxi,arr[i]);

        cout<<maxi<<" ";
    }
    return 0;

}    