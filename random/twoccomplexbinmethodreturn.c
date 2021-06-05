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
        complex  operator +(complex second){
            complex c(0,0);
            c.real = real + second.real;
            c.img = img + second.img;
            return c;
        }
};
int main(){
    complex a = complex(1,2);
    complex b = complex(1,1);
    complex c = complex(0,0);
    c = a + b;
    c.put();
   return 0;
}
