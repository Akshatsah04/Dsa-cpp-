#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ele[7]={4 ,4 ,4 ,2 ,2 , 4 , 3 };
    int currentmax=0;
    int ans;
    
    for(int i =0 ; i<7 ; i++){
        int maxnum=0;
        for(int j=i+1 ;j<7 ;j++){
            if(ele[i]==ele[j]){
                maxnum++;
            }
        }
        if(currentmax<maxnum){
           ans = ele[i]; 
        }
        currentmax=max(currentmax , maxnum);
    }
    cout<<ans;
    return 0;
}