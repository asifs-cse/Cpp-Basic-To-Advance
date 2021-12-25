#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int arr[5] = {4,8,9};
    int *arr2 = (int*) malloc(3*sizeof(int));
    *arr2 ={3};

    arr2[0] =1;
    arr2[1] =2;
    arr2[2] =3;
    *(arr2+2) = 4;

    cout<<sizeof(arr)<<endl<<sizeof(arr2)<<endl;
    cout<<*arr2<<endl;
    cout<<*arr2+2;
    return 0;
}