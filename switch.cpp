#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    char n;
    cout<<"Enter any char: ";
    cin>>n;

    switch (n)
    {
    case 'a':
        cout<<"A";
        break;
    case 'b':
        cout<<"B";
        break;
    case 'c':
        cout<<"C";
        break;
    
    default:
        break;
    }
    return 0;
}