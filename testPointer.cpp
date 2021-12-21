#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int *p, n=5;
    p =&n;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p;
    return 0;
}