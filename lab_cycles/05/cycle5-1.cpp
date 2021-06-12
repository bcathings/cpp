#include <iostream>
using namespace std;

class Student {
   private:
    int age;
   public:
    Student() {
        age = 20;
    }
    Student(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Student student1, student2(19);

    cout << "Student1 Age = " << student1.getAge() << endl;
    cout << "Student2 Age = " << student2.getAge() << endl;
    return 0;
}
