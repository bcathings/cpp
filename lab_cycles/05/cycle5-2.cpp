#include <iostream>
using namespace std;
class complex{
    public:
        int real, img;
        complex(){
            real = 1;
            img = 2;
        }
        complex(int r,int i){
            real = r;
            img = i;
        }
        void put(){
           cout<<real<<"+"<<img<<"i"<<endl; 
        }
        void add(complex second){
            real += second.real;
            img  += second.img;
        }
};
int main(){
    complex a = complex();
    a.put();
    complex b = complex(1,2);
    b.put();
    a.add(b);
    cout<<"a After sum = ";
    a.put();
    return 0;
}
