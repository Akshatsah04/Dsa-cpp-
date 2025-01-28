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
    int n , r;
    cout<<"enter two number"<<endl;
    cin>>n>>r;

    int ans= fac(n)/(fac(n-r)*fac(r));
    cout<<ans;

    return 0;
}