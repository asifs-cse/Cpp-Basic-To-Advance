#include<iostream>
#include<conio.h>
using namespace std;

class overLoadingClass{

    private:
    int num;
    public:
    void define(int a){
        num =a;
    }
    void get_data(){
        cout<<num<<endl;
    }
};

int main(){
    overLoadingClass obj1, obj2;

    obj1.define(10);
    obj1.get_data();
    
    obj2.define(20);
    obj2=obj1;
    obj2.get_data();

    return 0;
}