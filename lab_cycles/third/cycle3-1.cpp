
     # include <iostream> 
using namespace std;

 class student 
 { 
       private: 
                       int rn,cls; 
                       float fees;
                       char address[20];
                      void read() 
               { 
                     
                         cout<<"\nEnter the details of student:";
                         cout<<"\nROLLno:";cin>>rn;
                         cout<<"\nclass:";cin>>cls;
                         cout<<"\nfees:";cin>>fees;
               } 
    public: 
                     
                     void show() 
               { 
                     read(); 
                     cout<<"\nThe details are:";
                     cout<<"\n Rollno = "<<rn; 
                     cout<<"\n class ="<<cls;
                     cout<<"\n Fees = "<<fees; 
                } 
   
   
 }; 
           int main ( ) 
       { 
               student st; 
               st.show ( ); 
               return 0;
               
        } 
        
        
        