#include<iostream>
#include<vector>
using namespace std;

void ratpath(vector<vector<int>>& maze , int n , int r , int c , string path ,vector<string> &ans  ){
    if ( r <0 || c<0 || c>n-1 || r>n-1 || maze[r][c]==0)
    {
        return;
    }
    if (r==n-1 && c==n-1)
    {
        ans.push_back(path);
        return;
    }
    
    
    maze[r][c]=0;
    ratpath(maze ,n , r-1 , c , path+'U',ans);
    ratpath(maze,n , r+1 , c , path+'D',ans);
    ratpath(maze ,n, r , c+1 , path+'R',ans);
    ratpath(maze,n , r , c-1 , path+'L',ans);
    maze[r][c]=1;
}

int main(){
    vector<vector<int>> maze ={{1 , 0 , 0 , 0}, {1 , 1 , 0 , 0},{1 , 1 , 0 , 0} , {0 ,1 , 1,1}} ;
    vector<string> ans;
    string path;
    int n=maze.size();

    ratpath(maze , n , 0 , 0 , path ,ans);

    for(string val : ans){
        cout<<val<<endl;
    }
    return 0;
}