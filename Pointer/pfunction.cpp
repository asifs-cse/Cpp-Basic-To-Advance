#include<iostream>
#include<conio.h>
using namespace std;
int testValue(int x);
int testPValue(int* y);
int main(){
    int num =20;
    cout<<testValue(num)<<endl;
    cout<<testPValue(&num)<<endl;
    return 0;
}
int testValue(int n){
    cout<<n<<endl;
    n =90;
    return n;
}
int testPValue(int* add){
    cout<<*add<<endl;
    *add =56;
    return *add;
}