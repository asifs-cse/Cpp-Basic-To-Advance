#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a[2][2], b[2][2], c[2][2];
    cout<<"Enter first array values: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            cout<<"Enter "<<i<<j<<" Value: ";
            cin>>a[2][2];
        }
    }
    
    cout<<"Enter second array values: "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            cout<<"Enter "<<i<<j<<" Value: ";
            cin>>b[2][2];
        }
    }

    return 0;
}