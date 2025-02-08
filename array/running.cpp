#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int ra[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        if(i==0){
            ra[i]=arr[i];
            cout<<ra[i]<<endl;
        }else{
            ra[i]=arr[i]+ra[i-1];
            cout<<ra[i]<<endl;
        }
    }

    return 0;
}