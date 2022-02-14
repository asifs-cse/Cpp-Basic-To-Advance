#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[10],b[10],c[10];
    cout<<"Enter first array values: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter "<<i<<" value: ";
        cin>>a[i];
    }
    
    cout<<"Enter secound array values: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter "<<i<<" value: ";
        cin>>b[i];
    }
    cout<<"Summation or a and b array are: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        c[i]= a[i]+b[i]; //add
        cout<<"Value of "<<i<<" : "<<c[i]<<endl;
    }
    

    return 0;
}