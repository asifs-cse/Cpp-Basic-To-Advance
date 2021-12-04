#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    int num, reverseNumber = 0, remainder;
    cout<<"Enter any number: ";
    cin>>num; 

    while(num!=0){
        remainder = num%10; 
        reverseNumber = reverseNumber*10 + remainder; 
        num/=10;
    }
    cout<<"Reversed Number = "<<reverseNumber;
    
    return 0;
}