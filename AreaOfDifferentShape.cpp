#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    double base, height, width;
    cout<<"Enter Height, Width & Base value: ";
    cin>>base>>height>>width;

    cout<<"Triangle Area is: "<<1.5*base*height;
    cout<<"\nRectangle Area is: "<<height*width;

    return 0;
}