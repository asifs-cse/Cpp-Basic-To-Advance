#include<iostream>
#include<conio.h>
using namespace std;

class Matrix{
    int a[3][3];
    public:
    void accept();
    void display();
    void operator +(Matrix x);
};
void Matrix::accept(){
    cout<<"\n Enter Matrix Element (3x3): \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display(){
    for (int i = 0; i < 3; i++)
    {
        cout<<" ";
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator+(Matrix x){
    int mat[3][3];
    cout<<"\nAddition of Matrix: \n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j]=a[i][j]+x.a[i][j];
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    Matrix m,n;
    m.accept();
    n.accept();
    cout<<"\nFirst Matrix: \n\n";
    m.display();
    cout<<"\nSecond Matrix: \n\n";
    n.display();
    m+n;
    return 0;
}