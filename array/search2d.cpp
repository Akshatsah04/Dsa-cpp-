#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    int st1=0,st2=0,end1=mat.size()-1,end2=mat[0].size()-1 , target=3 , row=-1 ,mid;

    while (st1<=end1)
    {
        mid=(st1+end1)/2;
        if (mat[mid][0]==target)
        {
            cout<<"found";
            return 0;
        }else if (target >= mat[mid][0] && target <= mat[mid].back())
        {
            row=mid;
            break;
        }else if (mat[mid][0]<target)
        {
            st1=mid+1;
        }else if (mat[mid][0]>target)
        {
            end1=mid-1;
        }
        
        
        
    }
    if (row==-1)
    {
        cout<<"not found";
        return 0;
    }
    

    while (st2<=end2)
    {
        mid=(st2+end2)/2;
        if (mat[row][mid]==target)
        {
            cout<<"found";
            return 0;
        }else if (mat[row][mid]<target)
        {
            st2=mid+1;
        }else if (mat[row][mid]>target)
        {
            end2=mid-1;
        }
        
        
    }
    cout<<"not found";
    return 0;
    
    
    
}