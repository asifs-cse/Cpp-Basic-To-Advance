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
    a*=b;
    cout<<"Multipication: "<<a<<endl;
    a/=b;
    cout<<"Division: "<<a<<endl;
    a%=b;
    cout<<"Modulation: "<<a<<endl;
    
    return 0;
}