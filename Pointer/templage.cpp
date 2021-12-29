#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
T add(T a, T b){
    return a+b;
}
int main(){
    int a=5,b=6;
    float c=3.4, d=9.5;
    cout<<"Intiger sum: "<<add(a,b)<<endl;
    cout<<"Float sum: "<<add(c,d)<<endl;
    return 0;
}