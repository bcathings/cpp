#include <iostream>
using namespace std;
class complex{
    public:
        int real, img;
        complex(int r=1,int i=1);
        void put(){
           cout<<real<<"+"<<img<<"i"<<endl; 
        }
        friend complex add(complex,complex);
};
complex::complex(int r,int i=1){
    real = r; 
    img = i;
}

complex add(complex first,complex second){
    complex c(0,0);
    c.real = first.real + second.real;
    c.img = first.img + second.img;
    return c;
}
int main(){
    complex a = complex(1,2);
    complex b = complex();
    complex c = complex(0,0);
    c = add(a,b);
    c.put();
   return 0;
}
