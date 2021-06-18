#include<iostream>
#include<string.h>
using namespace std;
class String {
    public:
        char str[20];
    public:
        void input(){
                cout<<"\n Enter String:";
                cin>>str;
        }
        void display(){
                cout<<str;
        }
        String operator+(String x){
                String s;
                strcat(str,x.str);
                strcpy(s.str,str);
                return s;
        }
};
int main(){
    String str1, str2, str3;
    str1.input();
    str2.input();
    str3=str1+str2;
    cout<<"\n\n Concatenated String is:";
    str3.display();
    cout<<endl;
    return 0;
}
