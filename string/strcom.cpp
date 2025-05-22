#include<iostream>
#include<string>
using namespace std;

int main(){
    string chars="aabbcccdddddddddd" ;

    int st=0, end=0 ,count=0 ;
    char lst=chars[0];

    while (end<chars.size())
    {
        if (lst==chars[end])
        {
            // lst=chars[end];
            count++;
            end++;
            
        }else if (lst!=chars[end])
        {
            if (count>1)
            {
                
                chars[st]=lst;
                st++;
                string add1=to_string(count);
                for (int i = 0; i < add1.size(); i++)
                {
                    chars[st++]=add1[i];
                }
                
                
               
            }else{
                chars[st]=lst;
                st++;
            }
            lst=chars[end];
            end++;
            count=1;

            
        }
        if(end>=chars.size() && count>1){
            if (count>1)
            {
                
                chars[st]=lst;
                st++;
                string add2=to_string(count);
                for (int i = 0; i < add2.size(); i++)
                {
                    chars[st++]=add2[i];
                }
                
            }else{
                chars[st]=lst;
                st++;
                chars[st]=chars[end];
                st++;
            }
            // lst=chars[end];
            // end++;
            // count1=49;

        }else if (end>=chars.size() && (count==1 ))
        {
            chars[st]=lst;
            st++;
        }
        
        

        
    }

    cout<<st<<endl;
    cout<<chars<<endl;
    
}