#include<iostream>
#include<conio.h>
using namespace std;

template <class T> //template create
T add(T a, T b){ //template defination
    return a+b; //return value
}
int main(){
    int a=5,b=6; 
    float c=3.4, d=9.5;
    string e="Asif ", f="Shahriar";//string variable defination
    cout<<"Intiger sum: "<<add(a,b)<<endl; //function call
    cout<<"Float sum: "<<add(c,d)<<endl;  //function call
    cout<<"String sum: "<<add(e,f)<<endl; //function call
    return 0;
}