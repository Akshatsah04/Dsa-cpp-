#include<iostream>
#include<string>
using namespace std;

int main(){
    string str=" the    sky is blue  ";
    string str2;
    int j =0;
    char lt=str[str.size()-1];
    for (int i = str.size()-1; i >=0 ; i--)
    {
        if(str[i]==' ' && lt==' '){

        }else{
            str2.push_back(str[i]);
        }
        lt=str[i];
        
    }
    if (str2[str2.size()-1]==' ')
    {
        str2.pop_back();
    }
    
    int st=0 , end=0;
    while (end<str2.size())
    {
        end = st;
        while (end < str2.size() && str2[end] != ' ') {
            end++;
        }
        cout<<end<<endl;
        int l = st, r = end - 1;
        while (l < r) {
            swap(str2[l++], str2[r--]);
        }
        st=end+1;
        
        
    }
    


    cout<<str2<<endl;
    return 0;
    
    

}