#include<iostream>
#include<conio.h>
using namespace std;
int testValue(int x);
int main(){
    int num =20;
    cout<<testValue(num);
    return 0;
}
int testValue(int n){
    cout<<n<<endl;
    n =90;
    return n;
}