#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter digit for array"<<endl;

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }


    for(int i=1 ; i<=n-1 ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}