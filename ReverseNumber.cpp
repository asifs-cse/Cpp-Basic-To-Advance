#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    int num, reverseNumber = 0, remainder;
    cout<<"Enter any number: ";
    cin>>num; //53

    while(num!=0){
        remainder = num%10; //3 //5
        cout<<remainder<<endl;
        reverseNumber = reverseNumber*10 + remainder;  // 3 //50
        num/=10; //5
    }
    cout<<"Reversed Number = "<<reverseNumber;
    
    return 0;
}