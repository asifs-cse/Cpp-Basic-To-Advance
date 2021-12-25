#include<iostream>
#include<conio.h>
using namespace std;
bool isEven(int n){
    bool isEven = true;
    for (int i = 0; i < n; i++)
    {
        isEven =!isEven;
        // if (isEven)
        // {
        //     isEven=false;
        // }else{
        //     isEven=true;
        // }
        
    }return isEven;
}
int main(){
    int n=3;
    isEven(n)? cout<<"Enve" : cout<<"Odd";
    return 0;
}