#include<iostream>
#include<conio.h>
using namespace std;
void print2DArray(int testArray[2][2]);

int main(){
    int test[2][2]; //array diclear
    test[0][0]=5; //initaial first value
    test[0][1]=6;
    test[1][0]=7;
    test[1][1]=9;

    print2DArray(test);

    return 0;
}
void print2DArray(int arr[2][2]){
    for (int i = 0; i < 2; i++) //for loop start
    {
        for (int j = 0; j < 2; j++) //inner loop
        {
            cout<<arr[i][j]<<" "; //output array
        }
        cout<<"\n"; //new line start
        
    }
    
}