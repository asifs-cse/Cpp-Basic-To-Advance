#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    for (int i = 0; i < 100; i++)
    {   
        if(i==10){break;}
        cout<<i<<endl;
    }
    for (int i = 10; i < 20; i++)
    {
        if(i==10){continue;};
        cout<<i<<endl;
    }
    
    
    return 0;
}