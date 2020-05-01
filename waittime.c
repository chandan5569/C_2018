#include<stdio.h>
int main()
{
int n,bt[100],wt[100],tat[100],i;

printf("enter the number of process \n");
scanf("%d",&n);

printf("enter the brust time for that process indiviually \n");

for(i=0; i<n; i++)

scanf("%d",&bt[i]);

wt[0]=0;

for(i=1; i<n; i++)

wt[i]=wt[i-1]+bt[i-1];

printf("waiting times are in the order \n");

for(i=0; i<n; i++)

printf(" %d ",wt[i]);

for(i=0; i<n; i++)

tat[i]=bt[i]+wt[i];

printf(" turn around time is \n");

for(i=0; i<n; i++)

printf(" %d ",tat[i]);

printf("average waiting time is \n");

int avg=0,y=0;
for(i=1; i<n; i++)
{
wt[i]=wt[i-1]+bt[i-1];

y=y+wt[i];
}

avg=y/n;

printf(" %d ",avg);
printf("average turnaround time is \n");

int avg1;
for(i=1; i<n; i++)
{
tat[i]=bt[i]+wt[i];

y=y+tat[i];
}

avg1=y/n;

printf(" %d ",avg1);
return 0;
}

