#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int cd= arr[1]-arr[0];
    int j=2;
    int curr = 2;
    int ans=2;

    while(j<n)
    {
        if(cd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            cd=arr[j]-arr[j-1];
            curr=2;
        }
        ans= max(ans,curr);

        j++;
    }

    cout<<ans;


    return 0;
}