#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>b && a>c){
        cout<<"Biggest number is: "<<a;
    }else if(b>a && b>c){
        cout<<"Biggest number is: "<<b;
    }else{
        cout<<"Biggest number is: "<<c;
    }

    return 0;
}