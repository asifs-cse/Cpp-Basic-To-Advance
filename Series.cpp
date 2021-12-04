#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;
    int sum =0;
    cout<<"Enter ending number: ";
    cin>>num;

    for (int i = 1; i < num+1; i++)
    {
        sum +=i;
    }
    cout<<"Summation of series: "<<sum;

    return 0;
}