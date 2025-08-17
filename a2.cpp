#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
using namespace std;
int main(){
    list<int> l;
    deque<int> d;
    l.push_back(3);
    d.push_back(1);
    d.push_back(2);
    l.push_back(2);
    for (int p : d){
        cout<<p<<endl;
    }
    // cout<<l[1];
    pair<int,int> p;
    vector<vector<int>> vec={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==6){
                // p.insert({i,j});
                p={i,j};
                cout << "Position of 6: " << p.first << ", " << p.second << endl;
            }
        }
    }
    priority_queue<int,vector<int>,greater<int>> pr;
    pr.push(1);
    pr.push(2);
    pr.push(3);
    pr.push(4);
    cout<<pr.top();
}