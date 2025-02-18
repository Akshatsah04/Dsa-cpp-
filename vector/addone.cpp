#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){

    vector<int> digits;
    digits[0]=1;
    digits[1]=2;
    digits[2]=3;
    digits[3]=4;
    digits[4]=5;

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
                int power=pow(10,i);
                num =digits[i]*power;
            }
            num=num+1;
            for(int i=0;i<digits.size();i++){
                int power = pow(10,digits.size()-1);
                digits[i]=num%power;
            }

        }


        
    for (int i = 0; i < digits.size(); i++)
    {
        cout<<digits[i]<<" ";
    }    
    return 0;
}
