#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"enter a number for triangle"<<endl;
    cin>> a ;

    for(int i=1 ; i<=a ; i++)
    {
        for(int j=1 ; j<=a ; j++)
        {
            if(j<= a-i)
            {
                cout<<" ";
            }    
            else
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;

}