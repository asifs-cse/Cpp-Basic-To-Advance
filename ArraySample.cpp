#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of students: ";
    cin>>size;
    int students[size];
    for (size_t i = 0; i < size; i++)
    {
        cout<<"Enter students roll: ";
        cin>>students[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<students[i]<<endl;
    }
    
    
    return 0;
}