#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    float f=10.5;
    float* fpr = &f;
    cout<<fpr<<endl;
    cout<<*fpr<<endl;
    cout<<&f<<endl;
    *fpr = 45.56;
    cout<<f<<endl<<*fpr;
    return 0;
}