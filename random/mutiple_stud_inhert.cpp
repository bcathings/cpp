#include<iostream>
using namespace std;

class stud{
    protected:
        int rn;
        float m1,m2;
    public:
        void get1(){
            cout<<"Enter roll no:";
            cin>>rn;
            cout<<"Enter marks:";
            cin>>m1>>m2;
        }
        void put1(){
            cout<<"Roll no:"<<rn;
        }
};
class sports{
    protected:
        float m;
    public:
        void get2(){
            cout<<"Enter sports marks:";
            cin>>m;
        }
};
class res:public stud,public sports{
    public:
        void sum(){
            float tot;
            tot=m1+m2+m;
            cout<<"\nTotal="<<tot;
        }
};
int main(){
    res r;
    r.get1();
    r.get2();
    r.put1();
    r.sum();
    return 0;
}
