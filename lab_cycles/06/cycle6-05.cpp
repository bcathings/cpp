#include<iostream>
#include<string.h>
using namespace std;
class String {
    char str[20];
    public:

        void input(){
            cin>>str;
        }

        int operator ==(String s){
            if(!strcmp(str,s.str))
                return 1;
            return 0;
        }
};
int main(){
    String s1,s2;
    cout<<"Enter first string ::\n";
    s1.input();
    cout<<"Enter second string :: \n";
    s2.input();
    if(s1==s2){
        cout<<"\nStrigs are Equal\n";
    }
    else{
        cout<<"\nStrings are Not Equal\n";
    }
    return 0;
}
