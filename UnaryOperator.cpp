#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,result;

    cout<<"Enter a vlue: ";

    cin>>a;

    //minus unary
    result =-a;
    cout<<result<<endl;
    //plus unary 
    result =+a;
    cout<<result;

    return 0;
}