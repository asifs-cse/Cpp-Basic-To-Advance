#include<iostream>
#include<conio.h>
using namespace std;

void printArray(int arr[5]);
int main(){
    int arr1[5] = {10,3,5,2,4};
    int arr2[5] = {20,354,23,55,32};
    printArray(arr1);
    printArray(arr2);
    return 0;
}
void printArray(int arr[5]){
    cout<<"Printing array elements: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"New array! "<<endl;
    
}