#include<iostream>
using namespace std;
class p{
  int  age;
  public:
    void get(){
      cout<<"age:";
      cin>>age;
    }
    void disp(){
      cout<<"Age:"<<age<<endl;
    }
    p comp(p);
};
p p::comp (p s){
  if(age>s.age)
    return *this;
  else
    return s;
}
int main(){
  p s1,s2,s3;
  s1.get();
  s2.get();
  s3=s1.comp(s2); 
  s3.disp();
  return 0;
}
