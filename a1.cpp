#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    cout<<vec.front();
   cout<< vec.back();
   cout<< *(vec.begin());
   vector<int>::iterator it;
   for (auto it=vec.begin();it!=vec.end();it++){
    cout<<"the value is "<<*(it)<<endl;
   }

pair<int,pair<int,int>> p={1,{3,4}};
cout<<p.first;
cout<<p.second.second;
vector<pair<int,int>> vec1={{1,2},{3,4}};
for (auto val :vec1){
    cout<<val.first<<" "<<val.second <<endl;
}

}