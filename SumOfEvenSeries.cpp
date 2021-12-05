#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int num;
    int sum =0;
    cout<<"Enter end of series number: ";
    cin>>num;
    for (int i = 2; i <=num; i=i+2)
    {
       sum+=i;
    }
    cout<<sum;
    return 0;
}