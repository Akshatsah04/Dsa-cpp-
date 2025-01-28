#include<iostream>
using namespace std;


int binarysearch(int arr[] , int n , int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        
        }
        else
        {
            s=mid+1;
        }
    }

}

int main()
{
    int n;
    cout<<"enter a number for array"<<endl;
    cin>>n;

    int array[n];

    cout<<"enter "<<n<<" number for array"<<endl;

    for(int i=0 ; i<n ; i++)
    {
        cin>>array[i];
    }

    int key;
    cout<<"enter a number for search"<<endl;
    cin>>key;

    cout<<binarysearch(array , n , key);

    return 0; 
}