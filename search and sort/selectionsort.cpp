#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
            
        }
        swap(arr[i] , arr[min]);
        
        
    }
    return;
    
}

int main(){

    int n=5;
    int arr[5]={1 , 3 ,5 ,4 , 2};

    selectionsort(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}