#include<iostream>
using namespace std;

int main(){

    int bin ,n=2 ,x=10;
    double val=1 , currval=2;

    while(x>0){
        
        bin=x%2;
        // cout<<bin;
            
        if(bin==1){
            val=val*currval;
        }
        currval*=currval;

        x=x/2;
    }

    cout<<val;

    return 0;
        
}
