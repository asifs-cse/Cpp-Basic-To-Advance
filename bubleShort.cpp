#include<bits/stdc++.h>
using namespace std;

void bubleShort(int arr[], int n){
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++){cout<<arr[i]<<"\t";}
}

int main(){
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){cin>>arr[i];}

    cout<<"After shorting: "<<endl;
    bubleShort(arr, n);
    
    return 0;
}