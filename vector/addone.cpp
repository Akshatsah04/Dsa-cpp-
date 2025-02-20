#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    vector<int> digits;
    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);
    digits.push_back(4);
    digits.push_back(6);

    int num=0;
    bool wh = true;

    for(int i=0;i<digits.size();i++){
        if(digits[i]!=9){
            wh= false;
        }
    }


    if(wh==true){
        digits[0]=1;
        for(int i=1; i<digits.size() ;i++){
            digits[i]=0;
        }
        digits.push_back(0);
    }else{
        for(int i=0; i<digits.size();i++){
            int val =digits.size()-i-1;
            float power=pow(10,val);
            // cout<<power<<endl;
            num+=digits[i]*power;
        }
        // cout<<num<<endl;
        num=num+1;
        int sub=0;
        // cout<<num<<endl;
        for(int i=0;i<digits.size();i++){
            float power =pow(10,digits.size()-i-1);
            int val3=static_cast<int>(power);
            
            int val2= num/val3;
            digits[i]=val2-sub*10;
            sub=val2;
            
            // cout<<val2<<endl;
        }
    }


        
    for (int i = 0; i < digits.size(); i++){
        cout<<digits[i]<<" ";
    } 
    return 0;
}
