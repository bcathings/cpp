#include <iostream>
using namespace std;
class mat
{
    int a[10][10],b[10][10];
    public:
    void read(int m,int n);
    void put(int,int);
    friend void trans(mat,int,int);
};
void mat::read(int m,int n)
{
    int i,j;
    cout<<"enter elements: ";
    for (i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
}
void mat::put(int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<n;j++)
        cout<<"\t"<<a[i][j];
    }
}
void trans(mat m1,int m,int n)
{
    int i,j;
    mat m2;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    m2.b[j][i]=m1.a[i][j];
    cout<<"transpose\n";
    for(i=0;i<m;i++)
    {
        cout<<"\n";
        for(j=0;j<m;j++)
        cout<<"\t"<<m2.b[i][j];
    }
}
int main()
{
    int m,n;
    cout<<"enter elements: ";
    cin>>m>>n;
    mat m1,m2;
    m1.read(m,n);
    m1.put(m,n);
    trans(m1,m,n);
}
