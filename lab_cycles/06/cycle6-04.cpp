#include<iostream>
using namespace std;
class Time{
    int h,m;
    public:
        void get(){
            cout<<"Enter the time(hours and minutes):";
            cin>>h>>m;
        }
        friend Time operator +(Time,Time);
        void put(){
            cout<<"\n"<<h<<"Hours "<<m<<" Minutes"<<endl;
        }
};
Time operator +(Time t1,Time t2) {
    Time t3;
    t3.m=t1.m+t2.m;
    t3.h=t3.m/60;
    t3.m=t3.m%60;
    t3.h=t3.h+t1.h+t2.h;
    return t3;
}
int main() {
    Time t1,t2,t3;
    t1.get();
    t2.get();
    t1.put();
    t2.put();
    cout<<"\n\nAfter Addition:\n";
    t3=t1+t2;
    t3.put();
    return 0;
}
