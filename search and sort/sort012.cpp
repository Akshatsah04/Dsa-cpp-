#include<iostream>
using namespace std;

int main(){
    int n=13 , one=0 , zero=0 , two=0;
    int arr[]={1 , 0 , 1, 0 , 2 , 0  , 1 , 0  , 2 , 2,  0 , 1, 1};

    for (int i = 0; i < n ;i++)
    {
        if (arr[i]==0)
        {
            zero++;
        }
        if (arr[i]==1)
        {
            one++;
        }
        if (arr[i]==2)
        {
            two++;
        }
        
    }
    cout<< zero<< " " << one << " " << two<<"\n";
    for (int i = 0; i < n ;i++)
    {
        if (zero>0)
        {
            arr[i]=0;
            zero--;
        }
        else if (zero==0 && one>0)
        {
            arr[i]=1;
            one--;
        }
        else
        {
            arr[i]=2;
            two--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}