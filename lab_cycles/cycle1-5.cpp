#include<iostream>
using namespace std;

class reverse
{

public:
    int x;
    int reverse1() 
    {

        
        cout<<"Enter the number:";
        cin>>x;
    }
    void display()
    {
    int r, rev = 0;
    while (x > 0) 
        {
            r = x % 10;
            rev = rev * 10 + r;
            x = x / 10;
        }
    cout<<"reverse :"<<rev;
    }
};

int main()
{
reverse re;
re.reverse1();
re.display();
return 0;
}