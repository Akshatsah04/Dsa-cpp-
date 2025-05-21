#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string: ";
    getline(cin, str); 
    int st=0,end=str.size()-1 , ispal=1;

    while (st<end)
    {
        if (str[st++]!=str[end--])
        {
            ispal=0;
            break;
        }
        
    }
    if (ispal==1)
    {
        cout<<"given string is palindrome";
    }else{
        cout<<"given string is not a palindrome";
    }
    
    return 0;

}