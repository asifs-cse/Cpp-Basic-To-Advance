#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,i,qt,count=0, temp, sq=0, bt[10], wt[10], tat[10], rem_bt[10]; //int varibale
    float awt=0, atat=0; //float variable
    cout<<"Enter number of process: ";
    cin>>n; //input process number
    for (i = 0; i < n; i++) //input burst vlues
    {
        cout<<"Enter burst time of process "<<i+1<<" :";
        cin>>bt[i]; //input burst time
        rem_bt[i] = bt[i];  //inital remain values
    }
    cout<<"Enter quantum time: ";
    cin>>qt;
    while(1){  //start while loop
        for (i = 0;count=0; i++)
        {
            temp=qt;
            if (rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if (rem_bt[i]>qt)
            {
                rem_bt[i] = rem_bt[i]-qt;
            }else{
                if (rem_bt[i]>=0)
                {
                    temp =rem_bt[i];
                    rem_bt[i]=0;
                }
                sq= sq+temp;
                tat[i] =sq;
            } 
        }
        if (n==count)
        {
            break;
        }   
    }
    //show output
    cout<<"\nProcess \tburst time \tturnaround time \twaiting time\n"; 
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i]-bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        cout<<"\ni+1\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i];
    }
    awt=awt;
    atat=atat;
    cout<<"Average waiting time = "<<awt;
    cout<<"Average turnaround time ="<<atat;
    
    
    return 0;
}