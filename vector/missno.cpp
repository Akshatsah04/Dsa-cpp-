#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    int n =grid.size();
    unordered_map<int , int> m;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m.find(grid[i][j])!=m.end())
            {
                ans.push_back(grid[i][j]);
            }else{
                m[grid[i][j]]=1;
            }
            
        }
        
        
    }
    for (int i = 1; i <= n*n; i++)
    {
        if (m.find(i)==m.end())
        {
            ans.push_back(i);
        }
        
    }
    
    cout<<ans[0]<<" "<<ans[1];

    return 0;

    
}