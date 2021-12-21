#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x=10, y =30;
    int* pr = &x;
    cout<<pr<<endl;
    cout<<&x<<endl;
    cout<<*pr;

    return 0;
}