#include<iostream>
#include<climits>
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

    const int b = 10000;
    int idx[b];

    for(int i=0 ; i<b ; i++)
    {
        idx[i]=-1;
    }

    int minidx= INT_MAX;

    for(int i=0 ; i<n ; i++)
    {
        if(idx[arr[i]] != -1)
        {
            minidx = min(minidx , idx[arr[i]]);

        }
        else
        {
            idx[arr[i]]=i;
        }
    }

    if(minidx==INT_MAX)
    {
        cout<<"there is no reapeating no";
    }
    else
    {
        cout<<minidx+1;
    }

    return 0;

}