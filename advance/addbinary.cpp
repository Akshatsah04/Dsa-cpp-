#include <iostream>
using namespace std;

int rev(int a)
{
    int sum=0;

    while(a>0)
    {
        int lastd= a%10;
        
        sum=sum*10 + lastd;

        a=a/10;

    }
    return sum ;
    

}

int addbinary(int a , int b)
{
    int y , z ;
    int sum=1;

    int carry =0;

    while(a>0 && b>0)
    {
        y=a%10;
        z=b%10;

        if(y==0 && z==0 )
        {
            if(carry==0)
            {
                sum=sum*10 + 0;
                carry=0;
            }
            else
            {
                sum=sum*10 +1;
                carry=0;

            }
        }
        else if(y==1 && z==0)
        {
            if(carry==0)
            {
                sum = sum*10 +1;
                carry=0;
            }
            else
            {
                sum =sum*10 +0;
                carry=1;

            }
            
        }
        else
        {
            if(carry==0)
            {
                sum =sum*10 + 0;
                carry=1;
            }
            else
            {
                sum =sum*10 + 1;
                carry=1;
            }
        }
        a = a/10;
        b= b/10;

    }
    while(a>0)
    {
        y=a%10;

        if(y==0)
        {
            
            if(carry==0)
            {
                sum=sum*10 + 0;
                carry=0;
            } 
            else
            {
                sum=sum*10 + 1;
                carry=0;
            }
        
        }
        else
        {
            if(carry=0)
            {
                sum=sum*10 + 1;
                carry=0;
            }
            else
            {
                sum=sum*10 + 0;
                carry=1;
            }
        }
        a=a/10;

    }

    while(b>0)
    {
        z=b%10;

        if(z==0)
        {
            
            if(carry==0)
            {
                sum=sum*10 + 0;
                carry=0;
            } 
            else
            {
                sum=sum*10 + 1;
                carry=0;
            }
        
        }
        else
        {
            if(carry=0)
            {
                sum=sum*10 + 1;
                carry=0;
            }
            else
            {
                sum=sum*10 + 0;
                carry=1;
            }
        }
        b=b/10;

    }

    if(carry==1)
    {
        sum=sum*10 +1;
    }

    int sum2 =rev(sum);

    sum2=sum2/10;

    return sum2;


}

int main()
{
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;

    int r = addbinary(a,b);
    cout<<r;

    return 0;
}