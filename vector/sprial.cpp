#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans;

    int count=0 , m=mat.size() , n=mat[0].size() , rs=0 , cs=0, re=m, ce=n ;
    while (count<m*n)
    {
        for (int i = cs;i<ce && count < m * n ; i++)
        {
            cout<<mat[rs][i]<<" ";
            count++;
        }
        rs++;

        for (int i = rs; i < re && count < m * n; i++)
        {
            cout<<mat[i][ce-1]<<" ";
            count++;
        }
        ce--;
        for ( int i = ce-1; i >=cs && count < m * n; i--)
        {
            cout<<mat[re-1][i]<<" ";
            count++;
        }
        re--;
        for (int i = re-1; i >=rs && count < m * n; i--)
        {
            cout<<mat[i][cs]<<" ";
            count++;
        }
        cs++;
        
        
        
        
    }
    return 0;
    
}