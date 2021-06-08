#include<iostream>
using namespace std;
int &lar(int &p,int &q){
    if(p>q)
        return p;
    else
        return q;
}
int main(){
    int a,b;
    cout<<"Largest of 2 Numbers using return by reference\n";
    cout<<"-----------------------------\n";
    cout<<"Enter 2 Numbers:";
    cin>>a>>b;
    int l=lar(a,b);
    cout<<"Large="<<l;
    return 0;
}
