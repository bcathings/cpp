#include<iostream>
using namespace std;
class Complex {
    int num1, num2;
    public:
        void accept(){
                cout<<"\n Enter Two Complex Numbers : ";
                cin>>num1>>num2;
        }
        Complex operator+(Complex obj){
                Complex c;
                c.num1=num1+obj.num1;
                c.num2=num2+obj.num2;
                return(c);
        }
        void display(){
                cout<<num1<<"+"<<num2<<"i"<<"\n";
        }
};
int main(){
    Complex c1, c2, sum;
    c1.accept(); 
    c2.accept();
    sum = c1+c2;
    cout<<"Entered Values : \n";
    c1.display();
    c2.display();
    cout<<"Addition of Real and Imaginary Numbers : \n";
    sum.display(); 
    return 0;
        
}
