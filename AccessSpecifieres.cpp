#include<iostream>
#include<conio.h>
using namespace std;

class A{
    protected:
    int x;
    public:
    A(int p){
        x=p;
    }
};
class B:public A{
    private:
    int y;
    public:
    B(int p, int q):A(p){
        y=q;
    }
    void show(){
        cout<<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
};

int main(){

    B obj(10,20);
    obj.show();
    getch();
    return 0;
}