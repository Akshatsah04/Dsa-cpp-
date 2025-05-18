

#include<iostream>
#include<vector>
#include <algorithm> //to use reverse funtion
using namespace std;

int main(){
    vector<int> nums={2 ,3 ,4 ,5 ,6 ,5 };
    int n =nums.size() , pivot =-1 ;

        for(int i=n-1 ; i>0 ; i--){
            if(nums[i]>nums[i-1]){
                pivot=i-1;
                break;
            }
        }

        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1 ;i>pivot;i--){
            if(nums[pivot]<nums[i]){
                swap(nums[pivot],nums[i]);
                break;
            }
        }

        reverse(nums.begin()+pivot+1 , nums.end());
        return;


}