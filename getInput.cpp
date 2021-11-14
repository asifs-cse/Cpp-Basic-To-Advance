#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char name[50];
    int roll;
    double cgpa;

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll: ";
    cin>>roll;
    cout<<"Enter your CGPA: ";
    cin>>cgpa;

    cout<<"Hello "<<name<<endl;
    cout<<"Your roll is "<<roll<<endl;
    cout<<"Your CGPA "<<cgpa<<endl;

    getch();
}