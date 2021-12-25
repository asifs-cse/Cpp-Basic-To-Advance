#include<iostream>
#include<conio.h>
using namespace std;
bool ifEven(int n){
    return (n/2)*2==n;
}
int main(){
    int n=7;

    ifEven(n)? cout<<"Even":cout<<"Odd";
    // if(ifEven(n)){
    //     cout<<"Even";
    // }else
    //     cout<<"Odd";
    return 0;
}