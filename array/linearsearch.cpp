#include<iostream>
using namespace std;


int linearsearch(int array[] , int n , int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if(key == array[i])
        {
            return i;
        }
    }

    return -1;

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

    cout<<linearsearch(array , n , key);

    return 0;
}