#include<iostream>
#include<conio.h>
using namespace std;
int* getValue(){
    int *x;
    x = (int*)malloc(sizeof(int));
    *x =10;
    return x;
}
int main(){
    int* px = getValue();
    cout<<*px;
    return 0;
}