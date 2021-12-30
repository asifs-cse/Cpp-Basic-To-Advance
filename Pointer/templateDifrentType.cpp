#include<iostream>
#include<conio.h>
using namespace std;
template <class T1, class T2> //tamplate create
void print(T1 a, T2 b){ //accept any type of value //
    cout<<a<<" "<<b<<endl; //print value here //
}
int main(){
    print(1,1); //send integer value //
    print(1,1.5); //send integer and float value //
    print(1,"Asif"); //send integer and string value //
    return 0;
}