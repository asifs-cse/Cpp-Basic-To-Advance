#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Ente end value: ";
    cin>>n;

    do{
        cout<<i<<endl;
        ++i;
    }while (i<=n);
    
    return 0;
}