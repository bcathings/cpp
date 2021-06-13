#include<iostream>
using namespace std;
class Derived;
class c1{
    protected:
        int num1;
    public:
        void input1(){
            cout<<"\n Enter the 1st number: ";cin>>num1;
        }
        void display(){
                cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(c1 *num1, Derived *num2);
};
class Derived{
    protected:
        int num2;
    public:
        void input(){
                cout<<"\n Enter the  2nd number:";cin>>num2;
        }
        void show(){
                cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(c1 *num1, Derived *num2);
};
void swap(c1 *no1, Derived *no2){
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main(){
        c1 c;
        Derived d;
        swap(&c, &d);
        c.input1();
        d.input();
        c.display();
        d.show();
        return 0;
}
