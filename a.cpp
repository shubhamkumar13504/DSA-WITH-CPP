#include <iostream>
using namespace std;


int main(){
    // cout<<"hello world"<<endl;
    // char  g='A';
    // int c= g;
    // cout<< c<<endl;
    // int age;
    // cout<<"enter age"<<endl;
    // cin>>age;
    // cout<<age<<endl;
    int n=4;
    char c='A';
    for (int i =0 ;i<n;i++){
         
        for(int j=0;j<i+1;j++){
            cout<<c;
        }
        c=c+1;
        cout<<endl;
    }
}