#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"enter a number for triangle"<<endl;
    cin>> a ;
    int z=1;

    for(int i=1 ; i<=a ; i++)
    {
        for(int j=1 ; j<=a ; j++)
        {  
            if(j<=i)
            {
            cout<<z++<<" ";
               
            }
        }
           
        cout<<endl;
    }
    return 0;

}