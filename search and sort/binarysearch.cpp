#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr ,int tag){
    int n=arr.size() , st=0 , end=arr.size();
    while (st<=end)
    {
        int mid= st+ (end-st)/2;
        if (tag<arr[mid])
        {
            end = mid;
        }else if(tag>arr[mid]){
            st = mid;
        }else{
            return mid;
        }
        
    }
    return -1;
    
}

int main(){

    vector<int> arr={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
    int tag=6;
     
    cout<<binarysearch(arr , tag);


}