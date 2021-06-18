#include<iostream>
using namespace std;
class base {
    int a;
    public:
        virtual void get(){
            cout<<" \nEnter base data:";
            cin>>a;
        }
        void showb(){
            cout<<"\nBase data:"<<a;
        }
};
class der:public base {
    int b;
    public:
        void get(){
            cout<<"\nEnter derived data:";
            cin>>b;
        }
        void showd(){
            cout<<"\nDer data:"<<b;
        }
};
int main(){
    base b,*p;
    der d;
    p=&b;
    p->get();
    p->showb();
    p=&d;
    p->get();
    ((der*)p)->showd();
    return 0;
}
