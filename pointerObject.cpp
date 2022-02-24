#include<bits/stdc++.h>
using namespace std;
class sample{
    int value1, value2;
    public:
    void setValue(int num1,int num2){
        value1 = num1;
        value2 = num2;
    }
    void display(){
        cout<<"The given value are: "<<value1<<" "<<value2<<endl;
    };
};
int main(){
    sample *p = new sample;
    p->setValue(40, 99);
    p->display();

    return 0;
}