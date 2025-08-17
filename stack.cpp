#include<iostream>
#include<vector>
using namespace std;
class STACK {
    public:
vector<int> vec;
void push(int val){
    vec.push_back(val);
}
void pop(){
    vec.pop_back();
}
int top(){
    return vec[(vec.size())-1];
}
bool empty(){
    return vec.size()==0;
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