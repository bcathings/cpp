#include<iostream>
using namespace std;

 class sum
  {
   public:
   int i,n,sum=0;
   int ar[20];
  void sumar()
  {
      cout<<"Enter the no of elements: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>ar[i];
   }
}   
   void dispar()
{
   cout<<"Sum of all Elements are: ";

   for(i=0;i<n;i++)
   {
    sum=sum+ar[i];
   }
   cout<<sum;

}
   
};   

   int main()
{
      sum s;
      s.sumar();
      s.dispar();
      return 0;
  }