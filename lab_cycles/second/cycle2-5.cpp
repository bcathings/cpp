#include<iostream>
using namespace std;
  
int sum(int x, int y, int z=0, int w=0){
    return (x + y + z + w);
}
  
int main(){
    cout << "2 arguments = " << sum(10, 15) << endl;
    cout << "3 arguments = " << sum(10, 15, 25) << endl;
    cout << "4 arguments = " << sum(10, 15, 25, 30) << endl;
    return 0;
}
