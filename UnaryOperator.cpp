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
    cout<<result<<endl;

    //post increment
    result = a++;
    cout<<result<<endl;

    //pre increment
    result = ++a;
    cout<<result<<endl;

    //post decrement
    result =a--;
    cout<<result<<endl;

    //pre decrement
    result =--a;
    cout<<result<<endl;

    //end

    return 0;
}