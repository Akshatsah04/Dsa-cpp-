#include<iostream>
#include<vector>
#include<list>
using namespace std;

class stack{
    list<int> ll;

public:

    void push(int data){
        ll.push_front(data);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main(){

    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
    
}