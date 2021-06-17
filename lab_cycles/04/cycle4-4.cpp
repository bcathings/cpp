#include<iostream>
using namespace std;
class mat{
    int a[5][5];
    public:
        void read(int,int);
        void put(int,int);
        friend mat trans(mat,int,int);
};
void mat::read(int m,int n){
    int i,j;
    cout<<"Enter the elements:";
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
}
void mat::put(int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        cout<<"\n";
        for(j=0;j<n;j++)
            cout<<"\t"<<a[i][j];
    }
}
mat trans(mat m1,int m,int n) {
    int i,j;
    mat m2;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            m2.a[i][j]=m1.a[j][i];
    return m2;
}
int main() {
    int m,n;
    cout<<"Enter no of rows and columns:";
    cin>>m>>n;
    if(m==n){
        mat m1,m2;
        m1.read(m,n);
        m1.put(m,n);
        m2=trans(m1,m,n);
        cout<<"\nTranspose:\n";
        m2.put(m,n);
        cout<<endl;
    } else {
        cout<<"\nNot Possible...";
    }
    return 0;
}
