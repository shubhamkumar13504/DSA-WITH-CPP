#include<iostream>
using namespace std;
class Node {
public:
int data;
Node * next;

Node(int val){
    data=val;
    next=NULL;
}
};
class ll{
public:
Node* head;
Node* tail;

ll(){
    head=tail=NULL;
}
void pushfront(int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        tail=head=newnode;
    }
    else {
        newnode->next=head;
        head=newnode;
    }

}
void pushback(int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        tail=head=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void popfront(){
    Node * temp= head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void popback(){
    Node * temp= head;
    while(temp->next != tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}
void print(){
    Node * temp=head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}
};


int main(){
    ll a;
    a.pushfront(1);
    a.pushfront(2);
    a.pushback(7);
    a.pushback(8);
    a.popfront();
    a.popback();
    a.print();
}