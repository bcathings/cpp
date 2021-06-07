#include<iostream>
using namespace std;

class timeclas{
        int hr,min,sec;
        public:
            void get(){
                cout<<"\nEnter Hour :: ";
                cin>>hr;
                cout<<"\nEnter Minutes :: ";
                cin>>min;
                cout<<"\nEnter Seconds :: ";
                cin>>sec;
            }

            void disp(){
                cout<<"[ "<<hr<<":"<<min<<":"<<sec<<" ] \n";

            }
            void sum(timeclas &t1,timeclas &t2){
                sec=t1.sec+t2.sec;
                min=sec/60;
                sec=sec%60;
                min=min+t1.min+t2.min;
                hr=min/60;
                min=min%60;
                hr=hr+t1.hr+t2.hr;
        }
};

int main(){
    timeclas t1,t2,t3;
    cout<<"\nEnter 1st time Details :: \n";
    t1.get();
    cout<<"\nEnter 2nd time Details :: \n";
    t2.get();
    t3.sum(t1,t2);
    t3.disp();
    return 0; 
}

