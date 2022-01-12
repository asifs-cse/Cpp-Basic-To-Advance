#include<iostream>
#include<conio.h>
using namespace std;
class Wall{
    private: //private variable
    double length;
    public: //public constructor
    Wall(){ //defult consturctor
        length = 5.5; //variable declearation
        cout<<"Creating a wall."<<endl;
        cout<<"Length= "<<length<<endl;
    }
};
int main(){
    Wall wall1; //call constructor
    return 0;
}