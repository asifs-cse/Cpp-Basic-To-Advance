#include<iostream>
#include<conio.h>
using namespace std;

void maxIndex(int max[5]);
int main(){
    int max[5] ={86,34,75,345,6};
    maxIndex(max);
    return 0;
}
void maxIndex(int maxIndex[5]){
    int max = maxIndex[0];
    for (int i = 0; i < 5; i++)
    {
        if (max<maxIndex[i])
        {
            max = maxIndex[i];
        }
    }
    cout<<"Max value is: "<<max<<endl;
    
}