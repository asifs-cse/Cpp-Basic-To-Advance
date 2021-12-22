#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x =10;
    int *px1 =&x;
    int *px2;
    px2 = px1;
    *px2 =100;
    cout<<*px1<<endl<<*px2;
    return 0;
}