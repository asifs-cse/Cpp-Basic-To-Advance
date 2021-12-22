#include<iostream>
#include<conio.h>
using namespace std;
struct mStruct{
    int age;
    double height;
};
int main(){
    struct mStruct* ps;
    ps = (struct mStruct*) malloc(sizeof(struct mStruct)); //memory allocation in hip memory
    ps->age =30;
    ps->height =4.7;
    cout<<ps->age<<endl<<ps->height;

    return 0;
}