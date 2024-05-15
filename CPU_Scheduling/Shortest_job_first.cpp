// shortest job first scheduling algorithm
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    int p[n],at[n],bt[n],ct[n],wt[n],tat[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Enter the arrival and burst times of the process P"<< i+1 <<" : ";
        p[i]=i+1; // process number
        cin>>at[i]; // arrival time
        cin>>bt[i]; // burst time
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(at[i]>at[j])
            {
                swap(at[i],at[j]);
                swap(bt[i],bt[j]);
                swap(p[i],p[j]);
            }
            else if(at[i]==at[j] && bt[i]>bt[j])
            {
                swap(at[i],at[j]);
                swap(bt[i],bt[j]);
                swap(p[i],p[j]);
            }
        }
    }
    ct[0]=at[0]+bt[0];
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j] && ct[i-1]>=at[j])
            {
                swap(at[i],at[j]);
                swap(bt[i],bt[j]);
                swap(p[i],p[j]);
            }

        }
        if(ct[i-1]<at[i])
        {
            ct[i]=at[i]+bt[i];
        }
        else
        {
            ct[i]=ct[i-1]+bt[i];
        }

    }
    wt[0]=0;
    tat[0]=bt[0];
    for(int i=1;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
    cout<<"Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";
    for(int i=0;i<n;i++)
    {
        cout<<'p'<<p[i]<<"\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
    }

    return 0;
}