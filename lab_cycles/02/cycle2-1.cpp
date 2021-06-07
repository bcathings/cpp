#include <iostream> 
using namespace std;

void area(int r){
    cout<<"Enter Radius of the cirlce: "; 
    cin>>r;
    cout<<"Area= "<< 3.14 * r * r << endl;
}
void area(int l,int b){
    cout<<"Enter length of the rectangle: "; 
    cin>>l;
    cout<<"Enter breadth of the rectangle: "; 
    cin>>b;
    cout<<"Area of Rectangle= "<<l*b << endl;
}

int main () { 
    area(3);
    area(3,4);
    return 0;
} 
        
        
        
