#include<iostream>
#include<vector>
#include <cctype>
#include<string>
using namespace std;

int main(){
   
   
   int i,j;
   int n=4;
   char ch=65;

   for (int i = 0; i < n; i++)
   {
    ch=65+i;
    for (int j = 0; j <= i; j++)
    {
        cout<<ch<<" ";
        ch-=1;
    }
    
    cout<<endl;
    
   }
   
    

    return 0;
}