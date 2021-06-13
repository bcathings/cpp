#include<iostream>
using namespace std;
class avg {
    int n1,n2;
    public:
        void getdata(){
            cout<<"Enter value 1: ";
            cin>>n1;
            cout<<"Enter value 2: ";
            cin>>n2;
        }
        friend float mean (avg m);
    };
float mean(avg m){
    return float(m.n1+ m.n2)/2;
}
int main(){
    avg m;
    m.getdata();
    cout<<"Average = "<<mean(m);
    return 0;
}
