#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool isValid(string s) {
        stack<char> brac;
        int i=0;
        while(i!=s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                brac.push(s[i]);
            }else{
                if(s[i]==')' && brac.top()=='(' || s[i]=='}' && brac.top()=='{' || s[i]==']' && brac.top()=='['){
                    brac.pop();
                }else{
                    return false;
                }
            }
            i++;
        }
        return brac.empty();
    }

int main(){
    string s="]";

    cout<<isValid(s);

    return 0;

}