#include <iostream>
#include <vector>
using namespace std;
// class A
// {
// private:
//     double sal;

// public:
//     string s;
//     A()
//     {
//         cout << "hi";
//     }
//     A(string s)
//     {
//         this->s = s;
//         // cout<<"hi";
//     }
//     void detail()
//     {
//         cout << "my self : " << s<<endl;
//     }
//     void setter(double s){
//         sal=s;
//     }
//     void getter(){
//         cout<<"sal is : "<<sal;
//     }
// };
class stud{
public:
    string name;
    double *cgpa;
    stud(string name ,double cg){
        this->name=name;
        cgpa=new double;
        *cgpa=cg;
    }
    stud(stud &obj){
        this->name=obj.name;
        cgpa=new double;
        *cgpa=*obj.cgpa;
    }
    void getinfo(){
        cout<<"name is :"<<name<<endl;
        cout<<"cgpa is : "<<*cgpa<<endl;
    }
};
int main()
{
    // A h("shubham");
    // h.detail();
    // h.setter(23.34);
    // h.getter();
    stud s("SHUBHAM",9.14);
    s.getinfo();
    stud s2(s);
    *(s2.cgpa)=9.2;
    s.getinfo();
}