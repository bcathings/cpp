#include<iostream>
using namespace std;

void swap(int * num1, int * num2)
{
    int temp;

    
    temp = *num1;


    *num1= *num2;

  
    *num2= temp;

    cout<<"\n After swapping:";
    cout<<"\n Value of num1 ="<<*num1;
    cout<<"\n Value of num2 ="<<*num2;
}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>> num1;
    cin>> num2;
    
    cout<<"\n Before swapping:";
    cout<<"\n Value of num1 = "<<num1;
    cout<<"\n Value of num2 = "<<num2;
    swap(&num1, &num2);
    return 0;
}
