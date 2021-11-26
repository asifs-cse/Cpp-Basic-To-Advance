#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){

    double num1,num2;
    cout<<"Enter first value: ";
    cin>>num1;
    cout<<"Enter second value: ";
    cin>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    
    cout<<setw(15)<<"SUM = "<<num1+num2<<endl;
    cout<<setw(15)<<"SUB = "<<num1-num2<<endl;
    cout<<setw(15)<<noshowpoint;
    cout<<setw(15)<<"MUL = "<<num1*num2<<endl;
    cout<<setw(15)<<"DIV = "<<num1/num2;
    getch();

    return 0;
}