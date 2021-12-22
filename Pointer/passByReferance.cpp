#include<iostream>
#include<conio.h>
using namespace std;
int changeRef(int* x){
    *x =90;
    cout<<*x<<endl;
    return *x;
}
int main(){
    int x =70;
    cout<<changeRef(&x)<<endl;
    cout<<x;
    return 0;
}