#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num={2 , 7 , 11 , 15};
    int t =18;

    int st = 0;
    int end = num.size()-1;

    while (st<end){
        if(num[st]+num[end]>t){
            end--;
        }
        else if(num[st]+num[end]<t){
            st++;
        }
        else{
            cout<<st<<endl<<end<<endl;
            return 0;   
        }
    }
    return 0;
}