#include<iostream>
using namespace std;

class Example{
    public:
        int i;
        Example(int j){
            i = j;
        }
        ~Example(){
            cout<<"Object "<<i<<" Destructor called"<<endl;
        }
};
int main(){
    // escape from block
    {
        Example obj(1);
    }
    // Escape from function
    Example obj(2);
    return 0;
}
// escape from program
Example obj(3);
