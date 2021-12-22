#include<iostream>
#include<conio.h>
using namespace std;

int change(int x){
    x =50;
    return x;
}

int main(){
    int x =30;
    cout<<change(x)<<endl;
    cout<<x;
    return 0;
}