#include<iostream>
using namespace std;
class stud{
    protected:
        int rn;
        char n[20];
    public:
        void get1(){
            cout<<"Enter roll no and name:";
            cin>>rn;
            cin>>n;
        }
        void put1(){
        cout<<"\nRoll no:"<<rn<<"\nName :";
        puts(n);
        }
} ;
class test :public stud{
    protected:
        float m1,m2;
    public:
        void getmarks(){
            cout<<"Enter marks:";
            cin>>m1>>m2;
        }
};
class sports:public test{
    protected:
        float m;
    public:
        void getspm(){
            cout<<"Enter sports marks:";
            cin>>m;
        }
};
class res:public sports{
    public:
        void sum(){
            float tot;
            tot=m1+m2+m;
            cout<<"\nTotal marks="<<tot;
        }
};
int main(){
res r;
r.get1();
r.getmarks();
r.getspm();
r.put1();
r.sum();
return 0;
}
