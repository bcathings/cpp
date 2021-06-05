#include <iostream>
using namespace std;
class Factorial{
    public:
        Factorial(){
            int n;
            unsigned long long factorial = 1;

            cout << "Enter a positive integer: ";
            cin >> n;
            if (n < 0)
                cout << "Error! Factorial of a negative number doesn't exist.";
            else {
                for(int i = 1; i <=n; ++i) {
                    factorial *= i;
                }
                cout << "Factorial of " << n << " = " << factorial;    
            }
        }

};
int main(){
    Factorial var;
    return 0;
}
