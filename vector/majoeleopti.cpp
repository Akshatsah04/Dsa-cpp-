#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> giv = {1 , 2 , 2, 2 , 1 ,1 ,2 , 3 ,2 ,1 ,2 ,2};

    int fre =0, ans=0;

    for(int i=0 ; i<giv.size() ; i++){
        if(fre==0){
            ans=giv[i];
        }
        if(ans == giv[i]){
            fre++;
        }
        else{
            fre--;
        }
    }
    cout<<ans;
    return 0;
}