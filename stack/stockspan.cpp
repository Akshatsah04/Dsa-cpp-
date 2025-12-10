#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> stock={100 , 80 , 60 , 70 , 60 , 75 , 85};
    vector<int> span;
    stack<int> s;

    for(int i=0;i<stock.size();i++){
        while(s.size()>0 && stock[s.top()]<stock[i]){
            s.pop();
        }
        if (s.empty())
        {
            span.push_back(i+1);
        }else{
            span.push_back(i-s.top());
        }
        s.push(i);
        
    }

    for (int i = 0; i < span.size(); i++)
    {
        cout<<span[i]<<" ";
    }
    

    
    return 0;
    
}