#include<iostream>
#include<conio.h>
using namespace std;

template <class T> //template create
void print(T a){ //tamplate function create
    cout<<a;
}
int main(){
    print(6.5); //template function calling
    return 0;
}