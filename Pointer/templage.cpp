#include<iostream>
#include<conio.h>
using namespace std;

template <class T> //template create
T add(T a, T b){
    return a+b;
}
int main(){
    int a=5,b=6;
    float c=3.4, d=9.5;
    string e="Asif ", f="Shahriar";
    cout<<"Intiger sum: "<<add(a,b)<<endl;
    cout<<"Float sum: "<<add(c,d)<<endl;
    cout<<"String sum: "<<add(e,f)<<endl;
    return 0;
}