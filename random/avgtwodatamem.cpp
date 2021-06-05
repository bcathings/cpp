#include<iostream> 
using namespace std;

class Huh {
    public:
        int a;
        void getval(){
            cout<<"Enter val one";
            cin>>a;
        }
};
class Aight {
    public:
        int b;
        void getval(){
            cout<<"Enter val two";
            cin>>b;
        }
};
int main(){
    Aight right;
    Huh ok;
    ok.getval(); 
    right.getval(); 
    cout<< "avg : "<< (ok.a+right.b)/2;
    return 0;
}
