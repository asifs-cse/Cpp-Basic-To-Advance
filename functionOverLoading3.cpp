#include<iostream>
#include<conio.h>
using namespace std;

float absolute(float var){
    if (var<0.0)
    {
        var = -var;
    }
    return var;   
}
int absolute(int var){
    if (var< 0)
    {
        var = -var;
    }
    return var;
    
}
int main(){
    cout<<"function overloading"<<endl;
    cout<<"Absolute value of -5: "<<absolute(-5)<<endl;
    cout<<"Absolute value of 5.5: "<<absolute(-5.5f)<<endl;
    return 0;
}