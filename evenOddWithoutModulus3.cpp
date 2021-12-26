#include<iostream>
#include<conio.h>
using namespace std;

bool isEven(int n){
    return (!(n&1)); //return factorial number
}
int main(){
    int n =6;
    isEven(n) ? cout<<"Even" : cout<<"Odd";
    return 0;
}