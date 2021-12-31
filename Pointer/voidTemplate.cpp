#include<iostream>
#include<conio.h>
using namespace std;

template <class T> //template create
void print(T a){ //template function create
    cout<<a; //template operation
}
int main(){
    print(6.5); //template function calling
    return 0;
}