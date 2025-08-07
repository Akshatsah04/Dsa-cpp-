#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        this->val = data;
        this->next = NULL;
    }
};

class doublyll{
    Node* head;
    Node* tail;

public:

    doublyll(){
        head = tail = NULL;
    }

    void insertAtTail(int val){
        Node* newnode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = newnode;
        }else{

            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;

            // tail->next = newnode;
            // tail = newnode;
            // tail->next=head;
            
        }
        
    }


    void insertAtHead(int val){
        Node* newnode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = newnode;
        }else{
            newnode->next = tail->next;
            tail->next = newnode;
            head = newnode;
        }
        
    }


    void deleteAtHead(){
        if (tail == NULL)
        {
            return;
        }else if (tail->next == tail){
            delete tail;
            head = tail = NULL;
        }else{
            Node* temp = tail->next;
            tail->next = tail->next->next;
            temp->next = NULL;
            delete temp;
        }
        
    }

    void deleteAtTail(){
        if (tail == NULL)
        {
            return;
        }else if (tail->next == tail){
            delete tail;
            head = tail = NULL;
        }else{
            Node* temp = tail->next;
            Node* del = tail;
            while (temp->next != tail)
            {
                temp=temp->next;
            }

            temp->next= tail->next;
            tail->next=NULL;
            tail = temp;
            delete del;
            

        }
        
    }

    void printall(){
        Node* temp = tail->next;
        cout<<temp->val<<" ";
        temp=temp->next;
        while (temp != tail->next  )
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        
    }

};

int main(){

    doublyll test;
    test.insertAtTail(1);
    test.insertAtTail(2);
    test.insertAtTail(3);
    test.insertAtTail(4);
    test.insertAtHead(0);
    test.deleteAtHead();
    test.deleteAtTail();
    test.printall();

    
}