#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& arr ,int i , vector<vector<int>>& fin){
    int count=0, n=arr.size();
    vector<int> ans;
    if (n==fin.size())
    {
        return ;
    }
    
    while (count<n)
    {
        ans.push_back(arr[i]);
        count++;
        if (i==n-1)
        {
            i=0;
        }else{
            i++;
        }
        
    }
    fin.push_back({ans});
    return permutation(arr , i+1  , fin);
    
    
}

int main(){
    vector<int> arr={1 , 2 , 3 , 4 , 5 , 6 , 7};
    vector<vector<int>> fin;

    permutation(arr , 0 , fin);

    for (int i = 0; i < fin.size(); i++)
    {
        for (int j = 0; j< fin[0].size(); j++)
        {
            cout<<fin[i][j]<<" ";
        }
        cout<<endl;
    }
    
}