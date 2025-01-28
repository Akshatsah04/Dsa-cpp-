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

    int b=1000;
    bool ae[b];

    for(int i =0 ; i<b ; i++)
    {
        ae[i]=false;
    }

    for(int i =0 ; i<n ; i++)
    {
        ae[arr[i]]=true;
    }

    int ans=-1;

    for(int i=0 ; i<b ; i++)
    {
        if(ae[i]==false)
        {
            ans=i;
            break;
        }
    }

    cout<<ans;

    return 0;
    
}