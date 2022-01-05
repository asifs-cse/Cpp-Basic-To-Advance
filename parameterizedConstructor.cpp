#include<iostream>
#include<conio.h>
using namespace std;
class Wall{
    private:
    double length;
    double height;

    public:
    Wall(double len, double het){
        length = len;
        height = het;
    }
    double calculateArea(){
        return length*height;
    }
};
int main(){
    Wall wall(10.5, 12.5);
    cout<<"Area of Wall: "<<wall.calculateArea()<<endl;
    return 0;
}