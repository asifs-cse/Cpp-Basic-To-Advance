#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int number, sum=0;
    cout<<"Enter a number: ";
    cin>>number;

    do{
        sum+=number;
        cout<<"Enter a number: ";
        cin>>number;
    }while(number>=0);

    cout<<"Sum of positive number: "<<sum;
    return 0;
}