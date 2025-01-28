#include <iostream>
using namespace std;

int fac(int num)
{
    int pro= 1;
    for(int i=2 ; i<=num ; i++)
    { 
        pro=pro*i;
    }

    return pro;
}

int ncr(int n , int r)
{
    int ans= fac(n)/(fac(n-r)*fac(r));

    return ans;

}

int main()
{
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(int i=0 ; i<=n-1 ; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<ncr(i , j)<<" ";
        }
        cout<<endl;

    }

    return 0;

}