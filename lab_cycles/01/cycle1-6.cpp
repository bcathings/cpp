#include <iostream>
using namespace std;

#define ARRAY_SIZE 5
 
class array
{
    
    int numbers[ARRAY_SIZE], i ,j ,temp;
    public:
    void input()
    {
        
        for(i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
        
 
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}
    void display()
    {
        
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < ARRAY_SIZE; ++i)
        cout<<numbers[i]<<endl;
    }
};


int main()
{
    

array a;
a.input();
a.display();
return 0;
}
