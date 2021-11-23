#include<iostream>
#include<conio.h>
using namespace std;
class rectangle;

class cost{
    int costRate;
public:
    void setCostValue(int a){costRate = a;}
    int totalCost(rectangle A);
};

class rectangle{
    int height;
    int width;
public:
    void set(int a, int b){height = a; width =b;}
    int area(){
        return height*width;
    }
    friend int cost::totalCost(rectangle A);
};


int cost::totalCost(rectangle A){
    return costRate*A.height*A.width;
}

int main(){
    rectangle r;
    r.set(5,6);
    cout<<r.area()<<endl;
    cost c;
    c.setCostValue(90);
    cout<<c.totalCost(r)<<endl;
    return 0;
}