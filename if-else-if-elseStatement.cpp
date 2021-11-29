#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter a, b and c value: ";
    cin>>a>>b>>c;

    if(a>b & a>c){
        cout<<"Large number is: "<<a;
    }
    else if(b>a &b>c){
        cout<<"Large numbe is: "<<b;
    }else{
        cout<<"Large number is: "<<c;
    }
    return 0;
}