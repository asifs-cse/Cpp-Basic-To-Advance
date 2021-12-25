#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x=10;
    int* px =&x;
    cout<<&x<<endl;
    ++(*px); //pointer value increment
    cout<<*px<<endl;
    ++(px); // pointer address increment
    cout<<px<<endl;;
    --(*px); //pointr value decrement
    cout<<*px<<endl;
    --(px); //pointer address dicrement
    cout<<px;
    return 0;
}