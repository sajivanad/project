//Program to implement bankers algorithm 15-12-2015
#include<stdio.h>
void main()
{
 int n,m,finish[10],available[20],i,j,max[10][10],alloca[10][10],need[10][10],flag=0,work[10];
 printf("\nEnter the no of procesess ");
 scanf("%d",&n);
 printf("\nEnter the no of resources ");
 scanf("%d",&m);
 printf("\nEnter the available resource vector ");
 for(i=0;i<m;i++)
   scanf("%d",&available[i]);
 printf("\nEnter the maximum demand for each resource");
 for(i=0;i<n;i++)
  {
     printf("\nProcess %d :",i+1);
    for(j=0;j<m;j++)
        scanf("%d",&max[i][j]);
  }
 printf("\nEnter the allocated resource for each process ");
  for(i=0;i<n;i++)
  {
     printf("\nProcess %d :",i+1);
    for(j=0;j<m;j++)
        scanf("%d",&alloca[i][j]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
       need[i][j]=max[i][j]-alloca[i][j];
  }
 printf("\nThe need matrix is \n");
 for(i=0;i<n;i++)
  { 
     printf("\n");
    for(j=0;j<m;j++)
       printf("%d\t",need[i][j]);
  }
 for(i=0;i<m;i++)
 {
  work[i]=available[i];
 }
 for(i=0;i<n;i++)
    finish[i]=0;
 for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     if(finish[i]==0&&need[i][j]<=work[i])
        {
          work[i]=work[i]+alloca[i][j];
           finish[i]=1;
        }
      else if(finish[i]==0)
          flag=1;
      } 
   }

 if(flag==0)
  printf("\nThe system is in unsafe state\n");
 else
  printf("\nSystem is in safe state\n");
}
