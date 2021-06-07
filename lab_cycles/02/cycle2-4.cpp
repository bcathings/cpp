#include <iostream>
using namespace std;

inline void cube(int n) {
    cout << "Cube = "<< n * n * n << endl;
}

int main() {
    cube(2);
    cube(3);
    cube(4);
    return 0;
}
