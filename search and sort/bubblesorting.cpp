#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int sort=true;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sort=false;
            }

            
        }
        if (sort==true)
        {
            return;
        }
        
        
    }
    return;
    
}

int main(){

    int n=5;
    int arr[5]={1 , 3 ,5 ,4 , 2};

    bubblesort(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}