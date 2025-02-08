#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of your name"<<endl;
    cin>>n;

    char name[n];
    int ch[n];
    cout<<"enter your name"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>name[i];
    }
    for(int i=0 ; i<n ; i++){
        
        ch[i]=name[i]-32;
        cout<<name[i];
    }
    return 0;
}