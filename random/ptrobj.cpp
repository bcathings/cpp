#include<iostream> 
using namespace std;

class employee { 
   int wage;
   public: 
    void setwage(){
        cin>>wage;
    }
    void putWage(){
        cout<<wage<<endl;
    }
 }; 
int main() { 
    employee emp[2],*p; 
    employee *ptr;
    ptr = emp;
    for (int i=0;i<2;i++){
        (ptr+i)->setwage(); 
    }
    for (int i=0;i<2;i++){
        (ptr+i)->putWage(); 
    }
    return 0;
} 

