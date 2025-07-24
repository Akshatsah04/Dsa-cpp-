#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }


};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else
        {
            newNode->next=head;
            head= newNode;
        }
        
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else
        {
            tail->next=newNode;
            tail= newNode;
        }
        
    }
    void pop_front(){
        if(head ==NULL){
            return;
        }

        Node* temp = head;
        head=head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head ==NULL){
            return;
        }

        Node* temp = head ;
        while(temp->next != tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int val , int pos){
        if(pos<0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newnode= new Node(val);
        Node* temp = head;
        for(int i=0 ; i<pos-1 ; i++){
            if (temp==NULL)
            {
                cout<<"invalid position"<<endl;
                return;
            }
            
            temp = temp->next;  
        }
        newnode->next = temp->next;
        temp->next=newnode;
    }
    int search(int val){
        Node* temp = head;
        int idx =0;

        while (temp !=NULL)
        {
            if (temp->data == val)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
            
        }
        return -1;
        
    }

    void printLL(){
        Node* temp = head;
        
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_back(1);
    ll.insert(0 , 1);
    // ll.pop_back();
    ll.printLL();
    int vall= ll.search(2);
    cout<<endl<<vall<<endl;
    

    return 0;
}