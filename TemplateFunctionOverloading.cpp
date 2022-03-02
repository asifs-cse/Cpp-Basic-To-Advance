#include<bits/stdc++.h>
using namespace std;

template<class T>
T add(T a){
    return a;
}
template<class T1, class T2>
T1 add(T1 a, T2 b){
    return a+b; //return additon
}
void add(int a, int b){
    cout<<"Addition two int: "<<a+b;
}
int main(){
    cout<<"Addition int and float: "<<add(9.5, 10)<<endl;
    cout<<"Return same value: "<<add(9)<<endl;
    add(5,4);
    return 0;
}