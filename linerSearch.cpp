#include<bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int n, int f){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==f) return i;
    }
    return -1;  
}

int main(){
    int n, f;
    cout<<"Enter size and element: "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[1];
    }
    cout<<"Inpur search item: "<<endl;
    cin>>f;
    cout<<"Position: "<<linerSearch(arr,n, f);
    
    return 0;
}