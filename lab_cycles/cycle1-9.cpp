#include<iostream>
#include<conio.h>
using namespace std;
long fact(int n)
{
    if(n==0)
    return 1;
    return (n*fact(n-1));
}
int main()
{
    int num;
    cout<<"enter a positive number:";
    cin>>num;
    cout<<"factorial of the number"<< num <<"="<<fact(num);
    getch();
    return 0;
    
}