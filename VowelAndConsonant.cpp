#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char word;
    cout<<"Enter any Alpabet: ";
    cin>>word;
    if(word =='a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' || word =='A' || word == 'E' || word == 'I' || word == 'O' || word == 'U'){
        cout<<"Vowel";
    }else{
        cout<<"Consonant";
    }
    return 0;
}