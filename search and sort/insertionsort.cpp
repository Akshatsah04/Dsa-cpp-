#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int curr=arr[i];
        int pre=i-1;
        while (pre>=0 && arr[pre]>curr)
        {
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=curr;
        
        
    }
    return;
    
}

int main(){
    int n=5;
    int arr[5]={1 , 3 ,5 ,4 , 2};

    insertionsort(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}