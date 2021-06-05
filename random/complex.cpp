#include <iostream>
using namespace std;
class complex{
    public:
        int real, img;
        void get(){
           cout<<"Enter real part:";
           cin>>real; 
           cout<<"Enter img part:";
           cin>>img; 
        }
        void put(){
           cout<<real<<"+"<<img<<"i"<<endl; 
        }
        complex add(complex first,complex second){
            complex c;
            c.real = first.real + second.real;
            c.img = first.img + second.img;
            return c;
        }
};
int main(){
   complex a, b, c;
    a.get();
    b.get();
    c = b.add(a,b);
    c.put();
   return 0;
}
