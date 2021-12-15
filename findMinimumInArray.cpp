#include<iostream>
#include<conio.h>
using namespace std;
void findMinimum(int min[5]);
int main(){
    int arr[5] = {4,5,6,8,1};
    findMinimum(arr);
    return 0;
}

void findMinimum(int minArray[5]){
    int min =minArray[0];
    for (int i = 0; i < 5; i++)
    {
        if (min>minArray[i])
        {
            min = minArray[i];
        }
        
    }
    cout<<"Minimum element is: "<<min<<"\n";
    
}