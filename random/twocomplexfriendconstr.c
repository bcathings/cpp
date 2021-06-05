#include <iostream>
using namespace std;
class complex{
    public:
        int real, img;
        complex(int r,int i){
            real = r;
            img = i;
        }
        void put(){
           cout<<real<<"+"<<img<<"i"<<endl; 
        }
        friend complex add(complex,complex);
};
complex add(complex first,complex second){
    complex c(0,0);
    c.real = first.real + second.real;
    c.img = first.img + second.img;
    return c;
}
int main(){
    complex a = complex(1,2);
    complex b = complex(1,1);
    complex c = complex(0,0);
    c = add(a,b);
    c.put();
   return 0;
}
