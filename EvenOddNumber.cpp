#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num%2==0){
        cout<<"Even numer";
    }else{
        cout<<"Odd number";
    }
    return 0;
}