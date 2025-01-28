#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number for array size"<<endl;
    cin>>n;

    int array[n];

    cout<<"enter "<<n<<" number for array"<<endl;
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>array[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(int i=0 ; i<n ; i++)
    {
        maxno = max(maxno , array[i]);
        minno = min(minno , array[i]);
    }
    cout<<"max no = "<<maxno<<endl;
    cout<<"min no = "<<minno<<endl;

    return 0;

}