#include<iostream>
#include<conio.h>
using namespace std;

class Wall{
    private:
    double length;
    double height;

    public:
    Wall(double len, double hgt){
        length = len;
        height = len;
    }
    Wall(Wall &obj){ //copy constructor
        length = obj.length;
        height = obj.height;
    }
    double claculateArea(){
        return height*length; // return area
    }
};
int main(){
    Wall wall(10.5, 8.6);
    cout<<"Area of Wall : "<<wall.claculateArea()<<endl;
    return 0;
}