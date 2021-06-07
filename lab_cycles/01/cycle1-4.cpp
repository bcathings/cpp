#include<iostream>
using namespace std;


class sum
{
    public:
    int sum = 0,n;
    void input()
    {
        cout<<"Enter the number:";
    cin>>n;
    }
    void display()
    {
        while (n != 0) 
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout<<sum;
}
};

 
int main()
{
 sum s;
 s.input();
 s.display();
    return 0;
}