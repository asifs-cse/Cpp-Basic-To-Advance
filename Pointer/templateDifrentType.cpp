#include<iostream>
#include<conio.h>
using namespace std;
template <class T1, class T2>
void print(T1 a, T2 b){
    cout<<a<<" "<<b<<endl; 
}
int main(){
    print(1,1);
    print(1,1.5);
    print(1,"Asif");
    return 0;
}