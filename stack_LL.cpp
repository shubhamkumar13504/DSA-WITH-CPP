#include<iostream>
#include<list>
using namespace std;
class STACK {
    public:
list<int> l;
void push(int val){
    l.push_back(val);
}
void pop(){
    l.pop_back();
}
int top(){
    return l.back();
}
bool empty(){
    return l.size()==0;
}
};
int main(){
    STACK s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    
}