#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"enter a number for triangle"<<endl;
    cin>> a ;
    
    

    for(int i=1 ; i<=a ; i++)
    {
        for(int j=1 ; j<=a-i ; j++)
        {  
            cout<<"  ";
        }
        for(int k=1 ; k<=2*i-1 ; k++)
        {
            cout<<" *";
        }
            
        cout<<endl;
    }
    
    for(int i=a ; i>=1 ; i--)
    {
        for(int j=1 ; j<=a-i ; j++)
        {  
            cout<<"  ";
        }
        for(int k=1 ; k<=2*i-1 ; k++)
        {
            cout<<" *";
        }
            
        cout<<endl;
    }

    return 0;

}   