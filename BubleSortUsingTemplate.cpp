#include<bits/stdc++.h>
using namespace std;

template<class T>
void bubleShort(T arr[],int n){
    int counter=1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        counter++;
    }
    
}
template<class T>
void printArray(T arr, int n){
    for(int i=0; i<n;i++){cout<<arr[i]<<"\t";}
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){cin>>arr[i];}
    bubleShort(arr, n);
    cout<<"After sorting array: "<<endl;
    printArray(arr, n);


    return 0;
}