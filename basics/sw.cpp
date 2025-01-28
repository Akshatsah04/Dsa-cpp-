#include <iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character"<<endl;
    cin>>button;

    switch (button)
    {

        case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"nameste"<<endl;
        break;

        default :
        cout<<"i am still learning"<<endl;
        break;

    }

}
