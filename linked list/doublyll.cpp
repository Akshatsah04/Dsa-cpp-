#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:

    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if (head ==NULL)
        {
            head = tail = newnode;
        }else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        
    }


    void push_back(int val){
        Node* newnode = new Node(val);
        if (head ==NULL)
        {
            head = tail = newnode;
        }else{
            newnode->prev=tail;
            tail->next = newnode;
            tail = newnode;
        }
        
    }


    void pop_front(){
        if (head ==NULL)
        {
            return;
        }else{
            Node* del = head;
            head = head->next;
            head->prev=NULL;
            del->next = NULL;
            delete(del);
        }
        
    }


    void pop_back(){
        if (tail ==NULL)
        {
            return;
        }else{
            Node* del = tail;
            tail = tail->prev;
            tail->next=NULL;
            del->prev = NULL;
            delete del;
        }
        
    }



    void print(){
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->val<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }




};


int main(){
    DoublyList dll;
    dll.push_front(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.pop_front();
    dll.pop_back();
    dll.print();

}