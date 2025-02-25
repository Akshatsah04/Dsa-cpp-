#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    vector<int> digits;
    int n;
    cout<<"enter the size of input\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        digits.push_back(a);
    }

    int num=0;
    bool wh = true;

    for(int i=0;i<digits.size();i++){
        if(digits[i]!=9){
            wh= false;
            break;
        }
    }


    if(wh==true){
        digits[0]=1;
        for(int i=1; i<digits.size() ;i++){
            digits[i]=0;
        }
        digits.push_back(0);
    }else{
        int carry=1;
        for(int i=digits.size()-1 ; i>=0 ; i--){
            digits[i]+=carry;
            if(digits[i]==10){
                digits[i]=0;
                carry=1;
            }else{
                carry =0;
                break;
            }
        }
    }


        
    for (int i = 0; i < digits.size(); i++){
        cout<<digits[i]<<" ";
    } 
    return 0;
}

