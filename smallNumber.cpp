#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: "; //first input
    cin>>a;
    cout<<"Enter b: "; //secund input
    cin>>b;
    cout<<"Ente c: "; //third input
    cin>>c;

    if (a<=b && a<=c) //check first condition
    {
        cout<<"Smallest number is: "<<a;
    }else if(b<=a && b<=c){
        cout<<"Smallest number is: "<<b;
    }else{
        cout<<"Smallest number is: "<<c;
    }
    
    return 0;
}