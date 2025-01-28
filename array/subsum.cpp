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

    int mat;
    cout<<"enter a number"<<endl;
    cin>>mat;
    
    int i=0 , j=0 , st=-1 , en=-1 , sum=0;

    while(j<n && sum+arr[j]<=mat)
    {
        sum+=arr[j];
        j++;

        if(sum==mat)
        {
            cout<<i+1<<" "<<j<<endl;
            return 0;

        }
    }
    while(j<n)
    {
        sum+=arr[j];
        
        while(sum>mat)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==mat)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;

    }
    if(st==-1 && en==-1)
    {
        cout<<"not possible";
        return 0;
    }

    cout<<st<<" "<<en;

    return 0;
}        