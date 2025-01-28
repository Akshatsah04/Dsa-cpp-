#include<iostream>
using namespace std;

int main()
{
    int c;
    cout<<"enter rupees"<<endl;
    cin>>c;

    int temp=c;
    

    int total =0;

    while(c>2)
    {
        int rem = c%3;


        int rap =c/3;
        total+=rap;
        int f=(c/3);
        c=f+rem;
    }

    cout<<"you can buy "<<temp+total <<" chocolate";

    return 0;
}