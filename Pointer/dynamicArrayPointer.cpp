#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int arr[5] = {4,8,9};
    int *arr2 = (int*) malloc(12);
    *arr2 ={3};
    cout<<sizeof(arr)<<endl<<sizeof(arr2);
    return 0;
}