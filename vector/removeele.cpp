#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(4);
    nums.push_back(2);

    int val=2;

    int k=0;
    int i=0;
    while(i<nums.size()){
        if(nums[i]==val){
            nums.erase(nums.begin() + i);
            k++;
        }
        else{
            i++;
        }
    }

    cout<<k<<endl;

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}