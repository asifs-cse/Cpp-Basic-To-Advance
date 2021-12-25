#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int arr[3] ={1,2,3};
    cout<<arr<<endl; //when we print array variable name then comiler show array first index address
    cout<<*arr+0<<endl; //show array first element using pointer
    cout<<arr[0]<<endl; //show array first element using index number
    return 0;
}