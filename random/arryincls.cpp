#include<iostream> 
using namespace std;

class Huh {
    public:
        int arr[10];
        void insertele(){
            for(int i= 0;i<10;i++){
                cin>>arr[i];
            }
        }
        void biggest(){
            int big;
            big = arr[0];
            for(int i= 0;i<10;i++){
                if(arr[i]>big){
                    big = arr[i];
                }
            }
            cout<<big;
        }
};
int main(){
    Huh ok;
    ok.insertele();  
    ok.biggest();  
    return 0;
}
