#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    double fern, cels;
    cout<<"Enter Fahrenheit: ";
    cin>>fern;
    cels = (fern-32)/1.8;
    cout<<cels;
    return 0;
}