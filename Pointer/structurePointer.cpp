#include<iostream>
#include<conio.h>
using namespace std;
struct mStruct{
    int age;
    double height;

};
int main(){
    struct mStruct s1;
    s1.age =10; s1.height =5.7;
    struct mStruct* p1;
    p1 = &s1;
    //(*p1).age=80;
    //(*p1).height =5.9;
    p1->age=22;
    p1->height=5.9;
    cout<<"Age: "<<s1.age<<endl<<"Height: "<<s1.height<<endl;
    return 0;
}