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

    int a=1;

    while (a<1e6)
    {
        int k=0;
        int i;
        for(i=0; i<n ; i++)
        {
            
            if(arr[i] !=a)
            {
                k++;
                
            }

        }
        if(k==n)
        {
            cout<<a;
            return 0;
        }
        


        a++;
    }

    return 0;
    
}