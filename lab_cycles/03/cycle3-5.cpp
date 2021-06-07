#include<iostream>
using namespace std;
class emp {
    public:
        int eno;
        char name[20];
    void input(){
         cout<<"\n Enter the Employee NO : ";
         cin>>eno;
         cout<<"\n Enter the Employee NAME: :";
         cin>>name;
    }
};
class salary:public emp {
    float bp,hra,da,pf,np;
    public:
        void input1(){
            cout<<"\n Enter the BASIC PAY: ";
            cin>>bp;
            cout<<"\n Enter HRA: ";
            cin>>hra;
            cout<<"\n Enter DA: ";
            cin>>da;
            cout<<"\n Enter PF: ";
            cin>>pf;
        }
        void net_salary(){
            np=bp+hra+da-pf;
        }
        void display(){
            void input();
            cout<<"\n The net salary of employee:"<<np<<"\n";
        }
};
int main(){
    int i,n;
    char name;
    salary s[10];
    cout<<"\n Enter the No of Employees:";
    cin>>n;
    for(i=0;i<n;i++){
        s[i].input();
        s[i].input1();
        s[i].net_salary();
    }
    for(i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}

