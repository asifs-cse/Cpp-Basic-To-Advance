#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n =10;
    int* pr = &n;
    cout<<n<<endl;
    cout<<pr<<endl;
    *pr = 30;
    cout<<pr<<endl;
    cout<<*pr<<endl;
    cout<<n;
    return 0;
}