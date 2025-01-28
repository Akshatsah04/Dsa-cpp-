#include <iostream>
using namespace std;

int main()
{
    int a ;
    cout<<"enter a number for triangle"<<endl;
    cin>> a ;
    

        for(int j=1 ; j<=a ; j++)
        {
            if((j+1)%4==0)
            {
                cout<<" *";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;

        for(int k=1 ; k<=a ; k++)
        {
            if(k%2==0)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }

        }
        cout<<endl;

        for(int m=1 ; m<=a ; m++)
        {
            if((m-1)%4==0)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";

            }

        }

    return 0;

}   