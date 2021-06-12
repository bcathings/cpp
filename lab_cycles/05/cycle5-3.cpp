#include<iostream>
using namespace std;

class Adder{
    public:
        int sum=0, n;
        int *a;
        Adder(){
            cout<<"Enter array size\n";
            cin>>n;
            a = new int[n];
        }
        ~Adder(){
            delete []a;
        }
        void input() {
            cout<<"\nEnter "<<n<<" integer numbers:"<<endl;
            for(int i=0; i<n; i++){
                cin>>a[i];
            }
        }
        int add(){
            for(int i=0; i<n; i++){
                sum += a[i];
            }
            return sum;
        }
};
int main(){
   Adder obj;
   obj.input();
   cout<<"Sum= "<<obj.add()<<endl;
   return 0;
}
