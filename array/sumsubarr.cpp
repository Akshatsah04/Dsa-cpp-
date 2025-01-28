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

    for(int i =0 ; i<n ; i++)
        {
            int sum = 0;

            for(int j =i ; j<n ; j++)
            {
                sum+= arr[j];
            
                cout<<sum<<" ";
            }
        }

    return 0;

} 