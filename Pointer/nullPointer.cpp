#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int *px=NULL;
    cout<<px<<endl;

    int* x =(int*) malloc(sizeof(int));
    cout<<x<<endl;
    free(x);
    x=NULL;
    cout<<x;

    return 0;
}