#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,b,result;
    cout<<"Enter two veriable: ";
    cin>>a>>b;

    a+=b;
    cout<<"Addition: "<<a<<endl;
    a-=b;
    cout<<"Subtraction: "<<a<<endl;
    return 0;
}