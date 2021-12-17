#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: "; //first input
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Ente c: ";
    cin>>c;

    if (a<=b && a<=c)
    {
        cout<<"Smallest number is: "<<a;
    }else if(b<=a && b<=c){
        cout<<"Smallest number is: "<<b;
    }else{
        cout<<"Smallest number is: "<<c;
    }
    
    return 0;
}