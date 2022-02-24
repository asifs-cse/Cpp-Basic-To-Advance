#include<bits/stdc++.h>
using namespace std;

class num{
    int a,b;
    public:
    num(int x, int y){
        a=x;
        y=b;
    }
    void show(){
        cout<<"\nA="<<a<<"\tB="<<b;
    }
    void operator++(){
        ++a;
        ++b;
    }
    void operaotr--(int){
        a--;
        b--;
    }
};
int main(){
    num x(4,10);
    x.show();
    ++x;
    cout<<"\nAfter increment: ";
    x.show();
    --x;
    cout<<"\nAfter decrement: ";
    x.show();
}