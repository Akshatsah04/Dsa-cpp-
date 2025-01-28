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

int main()
{
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;

    int ans=fac(n);
    cout<<ans;

    return 0;
}

