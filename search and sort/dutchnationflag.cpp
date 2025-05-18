#include<iostream>
using namespace std;

int main(){
    int n=13 , m=0 , l=0 , h=n-1;
    int arr[]={1 , 0 , 1, 0 , 2 , 0  , 1 , 0  , 2 , 2,  0 , 1, 1};

    while(m<=h){
        if (arr[m]==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }else if(arr[m]==1){
            m++;
        }else{
            swap(arr[m],arr[h]);
            h--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}