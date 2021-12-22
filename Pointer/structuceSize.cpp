#include<iostream>
#include<conio.h>
using namespace std;
struct mStruct{
    int i;
    char c;
    double d;
};
int main(){    
    cout<<sizeof(struct mStruct);
    return 0;
}