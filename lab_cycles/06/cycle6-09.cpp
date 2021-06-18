#include <iostream>
using namespace std;

class Time{
	int hrs,min;
	public:
		Time(int ,int);  
		operator int(); 
};

Time::Time(int a,int b){
	hrs=a;
	min=b;
}

Time :: operator int(){
	return(hrs*60+min);
}

int main() {
	int h,m,duration;
	cout<<"Enter Hours ";
    cin>>h;
	cout<<"Enter Minutes ";
    cin>>m;
	Time t(h,m);      
	duration = t;     
	cout<<"Total Minutes are "<<duration<<endl;
	cout<<"2nd method operator overloading "<<endl;
	duration = t.operator int();
	cout<<"Total Minutes are "<<duration<<endl;
    return 0;
}
