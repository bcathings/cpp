#include <iostream>
using namespace std;

class student{
    private:
        char  name[30];
        int   rollNo;
        float   total;
        float perc;
    public:
   
        void getDetails(void){
            cout << "Enter name: " ;
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter total marks outof 500: ";
            cin >> total;
             
            perc=total/500*100;
        }

        void putDetails(){
            cout << "Student details:\n";
            cout << "\nName:"<< name << "\nRoll Number:" << rollNo << "\nTotal:" << total << "\nPercentage:" << perc;
        }
};

int main(){
    int max=10;
    student std[max];       
    int n,i;
    cout << "Enter total number of students: ";
    cin >> n;
    for(i=0;i< n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
    cout << endl;
    for(i=0;i< n; i++){
        cout << "\n Details of student " << i+1 << ":\n";
        std[i].putDetails();
    }
    return 0;
}
