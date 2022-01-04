#include<iostream>
#include<conio.h>
using namespace std;

bool isEven(int n){
    return (!(n&1)); //return factorial number
}
int main(){
    int n =6; //veriable declear and define value
    isEven(n) ? cout<<"Even" : cout<<"Odd";  //function call
    return 0;
}