#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};
class dl{
Node * head;
Node * tail;
public:
dl(){
    head=tail=NULL;
}
void pushfront(int val){
    Node * newnode= new Node(val);
    if (head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void pushback(int val){
    Node * newnode= new Node(val);
    if (head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
void popfront(){
    Node * temp=head;
    head=head->next;
    if(head != NULL){
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
}
void popback(){
    Node * temp=tail;
    tail=tail->prev;
    if(tail != NULL){
        tail->next=NULL;
    }
    temp->prev=NULL;
    delete temp;
}
void print(){
    Node * temp=head;
    while(temp->next != NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<temp->data;
}
};
int main()
{
    dl d;
    d.pushfront(1);
    d.pushfront(2);
    // d.pushfront(3);
    // d.pushfront(4);
    // d.pushfront(5);
    d.pushback(6);
    d.pushback(7);
    // d.pushback(8);
    // d.pushback(9);
    d.popfront();
    d.popback();
    d.print();
}