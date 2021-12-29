#include<iostream>
#include<conio.h>
using namespace std;

template <class T>
T add(T a, T b){
    return a+b;
}
int main(){
    int a=5,b=6;
    cout<<"Intiger sum: "<<add(a,b);
    return 0;
}