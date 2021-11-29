#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a=32,b=12, c;

    //bitwise and
    c = a&b;
    cout<<c<<endl;

    //bitwise or
    c = a|b;
    cout<<b<<endl;

    //bitwise x-or
    c=a^b;
    cout<<c<<endl;

    //leftshift
    c = a>>b;
    cout<<c;
    

    return 0;


}