#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x=10;
    int* px =&x;
    cout<<&x<<endl;
    ++(*px);
    cout<<x;
    return 0;
}