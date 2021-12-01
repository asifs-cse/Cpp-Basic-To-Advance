#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int mark;
    cout<<"Enter your mark: ";
    cin>>mark;

    if(mark<100){
        if(mark>=80 && mark<=100){
            cout<<"A+";
        }else if(mark>=70 && mark<=80){
            cout<<"A";
        }else if(mark>=60 && mark<=50){
            cout<<"A-";
        }else if(mark>=50 && mark<=40){
            cout<<"B";
        }
    }cout<<"Envalid mark!";
    
    return 0;
}