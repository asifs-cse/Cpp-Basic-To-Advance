#include<iostream>
#include<conio.h>
using namespace std;

class Wall{
    private:
    double length;
    double height;

    public:
    Wall(double len, double hgt){ //create constructor
        length = len;
        height = len;
    }
    Wall(Wall &obj){ //copy constructor
        length = obj.length; //initial constructor value
        height = obj.height;
    }
    double claculateArea(){
        return height*length; // return area
    }
};
int main(){
    Wall wall(10.5, 8.6); // object create and send value in constructor
    cout<<"Area of Wall : "<<wall.claculateArea()<<endl; //print output
    
    return 0;
}