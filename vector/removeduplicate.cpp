#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

       int k = 1;
       for(int i=1 ; i<nums.size() ; i++){
        if(nums[i]==nums[i-1]){

        }
        else{
            nums[k]=nums[i];
            k++;
        }
       } 

       return k;
        
}

int main(){
    vector<int> nums;
    int n;
    cout<<"enter no of element"<<endl;
    cin>>n;
    int copy[n];

    for(int i=0; i<n ; i++){
        cin>>copy[i];
    }
    for(int i=0 ; i<n ; i++){
        nums.push_back(copy[i]);
    }
    int k =removeDuplicates(nums);

    for(int i=0 ; i<k ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}