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
            cout<<" ";
        }
        for(int k=i ; k>=1 ; k--)
        {
            cout<<k;
        }
        for(int l=2 ; l<=i ; l++)
        {
            cout<<l;
        }
           
        cout<<endl;
    }
    return 0;

}