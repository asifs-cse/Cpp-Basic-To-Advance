#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout<<"Enter any positive number: ";
    cin>>num;

    if (num==0 || num==1)
    {
        isPrime = false;
    }else{
        for (int i = 2; i<=num/2; i++)
            if (num%i==0)
            {
                isPrime = false;
            }
        
    }

    if (isPrime)
    {
        cout<<"It's a prime number!";
    }else{
        cout<<"Not prime number: ";
    }
    

    return 0;
}