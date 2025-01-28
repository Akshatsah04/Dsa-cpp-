#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number for size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter "<<n<<" number"<<endl;

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int record=0;
    int maxi=0;
    int j=0;

    while(j<n)
    {
        if(arr[j]>arr[j+1] && arr[j]>maxi)
        {
            record++;
        }
        maxi = max(maxi,arr[j]);
        j++;

    }

    cout<<record;

    return 0;
}