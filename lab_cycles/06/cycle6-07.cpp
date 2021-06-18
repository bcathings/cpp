#include<iostream>
using namespace std;

class mat {
    int a[10][10];
    int m,n;
    public:
    void read();
    void dis();
    void readmn(){
        cout<<"enter order:";
        cin>>m>>n;
    }
    int operator==(mat);
    mat operator +(mat);
    friend mat operator -(mat,mat);
};
void mat::read(){
    cout<<"enter elements of matrix1:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
void mat::dis(){
    int i,j;
    for(i=0;i<m;i++){
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<"\t"<<a[i][j];
    }
}
int mat::operator==(mat m2){
    if(m==m2.m && n==m2.n){
        return 1;
    }
    return 0;
}
mat mat::operator+(mat m2){
    mat m3;
    m3.m=m;
    m3.n=n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            m3.a[i][j]=a[i][j]+m2.a[i][j];
        }
    }
    return m3;
}
mat operator -(mat m1,mat m2){
    mat m3;
    m3.m=m1.m;
    m3.n=m1.n;
    for(int i=0;i<m3.m;i++){
        for(int j=0;j<m3.n;j++){
            m3.a[i][j]=m1.a[i][j]-m2.a[i][j];
        }
    }
    return m3;
}
int main(){
    mat m1,m2,m3;
    cout<<"matrix operation using operator overloading:";
    cout<<"matrix 1:"<<endl;
    m1.readmn();
    cout<<"matrix 2:"<<endl;
    m2.readmn();
    if(m1==m2){
        cout<<"matrix1:"<<endl;
        m1.read();
        cout<<"matrix2:"<<endl;
        m2.read();
        cout<<"matrix1:"<<endl;
        m1.dis();
        cout<<"matrix2:"<<endl;
        m2.dis();
        int c;
        while(1){
            cout<<"\nmatrix addition,subtraction,exit\n:";
            cout<<"enter your choice:";
            cin>>c;
            switch(c){
                case 1:
                    m3=m1+m2;
                    cout<<"\nsum";
                    m3.dis();
                    break;
                case 2:
                    m3=m1-m2;
                    cout<<"\ndifference";
                    m3.dis();
                    break;
                case 3:
                    exit(0);
                default:
                    cout<<"\ninvalid system";
            }
        }
    } else
        cout<<"impossible";

    return 0;
}
