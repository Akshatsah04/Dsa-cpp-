#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> tr;
    int n;
    cin>>n;
    for(int i=0;i<n ; i++){
        int a ;
        cin>>a;
        tr.push_back(a);

    }
    for(int i=0;i<n ; i++){
        cout<<tr[i];

    }
    

    return 0;
}