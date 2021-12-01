#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char word;
    cout<<"Enter any Alpabet: ";
    cin>>word;
    word = tolower(word);
    if(word =='a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        cout<<"Vowel";
    }else{
        cout<<"Consonant";
    }
    return 0;
}