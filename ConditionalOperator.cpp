#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Ente a & b: ";
    cin>>a>>b;

    int large = a>b?a:b;
    cout<<large;
    return 0;
}