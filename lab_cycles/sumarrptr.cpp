#include<iostream>
using namespace std;

int main(){
    int nums[20],*ptr; 
    ptr=nums;
    int sum=0,n;
    cout<<"enter the limit: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter"<<i<<"th number: ";
        cin>>nums[i];
        sum += *(ptr+i);
   }
    cout<<"sum: "<<sum<<endl;
    return 0;
}
