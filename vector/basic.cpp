#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> hi={1,2,3,4,4};
    hi.push_back(10);
    hi.push_back(5);
    hi.pop_back();
    cout<<hi.capacity()<<endl;
    cout<<hi.size()<<endl;
    cout<<hi.front()<<endl;
    cout<<hi.back()<<endl; 
    cout<<hi.at(1)<<endl; 

    return 0;
}