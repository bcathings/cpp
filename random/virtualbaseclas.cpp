#include<iostream>
using namespace std;

class student {
    int rno;
public:

    void getnumber() {
        cout << "Enter Roll No:";
        cin>>rno;
    }

    void putnumber() {
        cout << "\n\n\tRoll No:" << rno << "\n";
    }
};

class test : virtual public student {
protected:
    int m1, m2;
    public :

    void getmarks() {
        cout << "Enter Marks\n";
       
        cin>>m1>>m2;
       
    }
};

class sports : public virtual student {
protected:
    int score;
public:
    void getscore() {
        cout << "Enter Sports Score:";
        cin>>score;
    }

    void putscore() {
        cout << "\n\tSports Score is:" << score;
    }
};

class result : public test, public sports {
    protected:
    int total;
public:

    void display() {
        total = m1 + m2 + score;
        cout << "\n\tTotal Score:" << total;
    }
};

int main() {
    result r;
    r.getnumber();
    r.getmarks();
    r.getscore();
    r.display();
    return 0;
}
