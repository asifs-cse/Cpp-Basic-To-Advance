#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int num, factorial=1;
    cout<<"Enter any number: ";
    cin>>num;

    for (int i = num; i >0; i--)
    {
        factorial *=i;
    }
    cout<<"Factorial numbers are: "<<factorial<<endl;
    return 0;
}