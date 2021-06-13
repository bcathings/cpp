#include<iostream>
using namespace std;
class complex {
    int r,i;
    public:
    void get(){
        cout<<"Enter the real part and imaginary part:\n";
        cin>>r>>i;
    }
    void put(){
        cout<<"\n"<<r<<"+"<<i<<"i"<<endl;
    }
    friend complex add(complex,complex);
};
complex add(complex c1,complex c2){
    complex c3;
    c3.r=c1.r+c2.r;
    c3.i=c1.i+c2.i;
    return c3;
}
int main() {
    complex c1,c2,c3;
    c1.get();
    c2.get();
    cout<<"Before Addition:\n";
    c1.put();
    c2.put();
    cout<<"\nAfter Addition:\n";
    c3=add(c1,c2);
    c3.put();
    return 0;
}
